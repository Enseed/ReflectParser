#include "Precompiled.h"

#pragma warning(push)

#pragma warning( disable : 4800 )
#pragma warning( disable : 4244 )
#pragma warning( disable : 4146 )
#pragma warning( disable : 4291 )

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/DeclVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Basic/SourceManager.h"

#include "clang/Tooling/CommonOptionsParser.h"
#include "llvm/Support/CommandLine.h"
#include "clang/Tooling/Tooling.h"

#pragma warning(pop)

#include <boost/multiprecision/cpp_int.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

#include "Reflect.h"
#include <fstream>
#include <iostream>

struct ParseContext
{
	Reflect::Header header;
	std::string unitName;
};

std::string GetNamespace(clang::TagDecl *Declaration)
{
	std::string ns;
	clang::DeclContext *parent = Declaration->getParent();
	while (parent != nullptr)
	{
		clang::Decl::Kind kind = parent->getDeclKind();
		if (kind == clang::Decl::Namespace)
		{
			clang::NamespaceDecl* parentNamespace = static_cast<clang::NamespaceDecl*>(parent);
			if (ns.empty())
				ns = parentNamespace->getNameAsString();
			else
				ns = parentNamespace->getNameAsString() + "." + ns;
		}

		parent = parent->getParent();
	}
	return ns;
}

Reflect::Visibility GetVisibility(clang::AccessSpecifier visibility)
{
	switch (visibility)
	{
	case clang::AS_public:
		return Reflect::ePUBLIC;
	case clang::AS_protected:
		return Reflect::ePROTECTED;
	case clang::AS_private:
		return Reflect::ePRIVATE;
	case clang::AS_none:
	default:
		return Reflect::eNONE;
	}
}

class EnumVisitor : public clang::RecursiveASTVisitor < EnumVisitor >
{
private:
	Reflect::Enum *_enum;

public:
	EnumVisitor(Reflect::Enum *c)
		: _enum(c)
	{}

	bool VisitEnumConstantDecl(clang::EnumConstantDecl *Declaration)
	{
		_enum->_constants.emplace_back();
		Reflect::EnumConstant &enumconst = _enum->_constants.back();
		enumconst._name = Declaration->getNameAsString();
		enumconst._value = Declaration->getInitVal().toString(10);
		enumconst._bitWidth = Declaration->getInitVal().getBitWidth();
		enumconst._isSigned = Declaration->getInitVal().isSigned();
		enumconst._implicit = Declaration->getInitExpr() == nullptr;

		return true;
	}
};

class TypeVisitor : public clang::RecursiveASTVisitor<TypeVisitor>
{
private:
	Reflect::Class *_class;
	clang::ASTContext *_context;

public:
	TypeVisitor(clang::ASTContext *context, Reflect::Class *c)
		: _context(context)
		, _class(c)
	{}

	bool VisitFieldDecl(clang::FieldDecl *Declaration)
	{
		std::string sourceName = _context->getSourceManager().getFilename(Declaration->getLocStart()).str();

		_class->_fields.emplace_back();
		Reflect::Field &field = _class->_fields.back();
		field._name = Declaration->getNameAsString();
		field._visibility = GetVisibility(Declaration->getAccess());
		field._filename = sourceName;
		field._line = _context->getSourceManager().getSpellingLineNumber(Declaration->getLocStart());


		field._type._kind = Declaration->getType().getTypePtr()->getTypeClassName();
		field._type._name = Declaration->getType().getAsString();

		field._canonicalType._kind = Declaration->getType()->getCanonicalTypeInternal().getTypePtr()->getTypeClassName();
		field._canonicalType._name = Declaration->getType()->getCanonicalTypeInternal().getAsString();


		clang::Qualifiers qualifiers = Declaration->getType().getQualifiers();
		field._hasConst = qualifiers.hasConst();
		field._hasRestrict = qualifiers.hasRestrict();
		field._hasVolatile = qualifiers.hasVolatile();


		clang::Type::TypeClass typeClass = Declaration->getType()->getCanonicalTypeUnqualified()->getTypeClass();
		std::string classTypeName = Declaration->getType()->getCanonicalTypeUnqualified()->getTypePtr()->getTypeClassName();


		return true;
	}
};

class ReflectClassVisitor : public clang::RecursiveASTVisitor < ReflectClassVisitor >
{
private:
	ParseContext *_parsingContext;
	clang::ASTContext *_context;

public:
	explicit ReflectClassVisitor(clang::ASTContext *Context, ParseContext *parsingContext)
		: _context(Context)
		, _parsingContext(parsingContext)
	{}

	bool VisitDecl(clang::Decl *Declaration)
	{
		std::string sourceName = _context->getSourceManager().getFilename(Declaration->getLocStart()).str();
		if (sourceName != _parsingContext->unitName)
			return true; // ignore

		std::cout << "<" << __FUNCTION__ <<  ">" << std::endl;
		Declaration->dump();
		std::cout << "</" <<  __FUNCTION__ << ">" << std::endl;
		return true;
	}

	bool VisitEnumDecl(clang::EnumDecl *Declaration)
	{
		std::string sourceName = _context->getSourceManager().getFilename(Declaration->getLocStart()).str();
		if (sourceName != _parsingContext->unitName)
			return true; // ignore

		_parsingContext->header._enums.emplace_back();
		Reflect::Enum &e = _parsingContext->header._enums.back();

		Declaration->dump();

		e._filename = sourceName;
		e._line = _context->getSourceManager().getSpellingLineNumber(Declaration->getLocStart());
		e._kind = Declaration->getKindName().str();
		e._name = Declaration->getName().str();

		// namespace 

		EnumVisitor visitor(&e);
		visitor.TraverseDecl(Declaration);
		return true;
	}


	bool VisitCXXRecordDecl(clang::CXXRecordDecl *Declaration)
	{
		std::string sourceName = _context->getSourceManager().getFilename(Declaration->getLocStart()).str();
		if (sourceName != _parsingContext->unitName)
			return true; // ignore

		_parsingContext->header._classes.emplace_back();
		Reflect::Class &c = _parsingContext->header._classes.back();

		c._filename = sourceName;
		c._line = _context->getSourceManager().getSpellingLineNumber(Declaration->getLocStart());
		c._kind = Declaration->getKindName().str();
		c._name = Declaration->getName().str();



		// namespace 
		c._namespace = GetNamespace(Declaration);

		// parents
		for (const auto &I : Declaration->bases()) {
			c._parents.emplace_back();
			Reflect::Parent &parent = c._parents.back();
			std::string abc = I.getType().getTypePtr()->getTypeClassName();
			parent._virtual = I.isVirtual();
			parent._visibility = GetVisibility(I.getAccessSpecifier());

			clang::CXXRecordDecl *parentClass = I.getType().getTypePtr()->getAsCXXRecordDecl();
			parent._name = parentClass->getNameAsString();
			parent._namespace = GetNamespace(parentClass);

			std::string parentSourceName = _context->getSourceManager().getFilename(parentClass->getLocStart()).str();
			parent._filename = parentSourceName;
			parent._line = _context->getSourceManager().getSpellingLineNumber(parentClass->getLocStart());

		}

		TypeVisitor visitor(_context, &c);
		visitor.TraverseDecl(Declaration);
		return true;
	}
};




class ReflectClassConsumer : public clang::ASTConsumer
{
public:
	explicit ReflectClassConsumer(clang::ASTContext *Context, ParseContext *writeContext)
		: Visitor(Context, writeContext)
	{}

	virtual void HandleTranslationUnit(clang::ASTContext &Context) 
	{
		Visitor.TraverseDecl(Context.getTranslationUnitDecl());
	}

private:
	ReflectClassVisitor Visitor;
};


class ReflectClassAction : public clang::ASTFrontendAction
{
private:
	ParseContext *_writeContext;

public:
	ReflectClassAction(ParseContext *writeContext)
		: _writeContext(writeContext)
	{}

public:
	virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance &Compiler, llvm::StringRef InFile)
	{
		return std::unique_ptr<clang::ASTConsumer>(new ReflectClassConsumer(&Compiler.getASTContext(), _writeContext));
	}
};


void Reflect::parse(int argc, const char *argv[], Reflect::OnHeaderParsedCb onHeaderParsedCb)
{
	std::vector<std::string> args;
	std::vector<std::string> fileArgs;

	for (int i = 1; i < argc; ++i)
	{

		if (boost::starts_with(argv[i], "-"))
			args.push_back(argv[i]);
		else
			fileArgs.push_back(argv[i]);
	}

//	args.push_back("-IC:\\Work\\Public\\Reflect\\External");
//	args.push_back("-IC:\\Work\\Enseed_svn\\trunk\\ThirdParty\\boost");
//	args.push_back("-IC:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.10056.0\\ucrt");
//	args.push_back("-fms-compatibility-version=19.00.22609");

	for (const std::string &file : fileArgs)
	{
		boost::filesystem::path path(file);
		path = path.normalize();
		if (boost::filesystem::is_directory(path))
		{
			std::cout << "Looking for header files in directory " << path << std::endl;
			boost::filesystem::directory_iterator iter(path);
			for (boost::filesystem::path const& file : iter)
			{
				std::string extension = file.extension().string();
				if (isValidSourceFile(file))
				{
					parseFile(args, file, onHeaderParsedCb);
				}
			}
		}
		else
		{
			if (isValidSourceFile(file))
			{
				parseFile(args, path, onHeaderParsedCb);
			}
			else
			{
				std::cout << "Invalid file: " << file << std::endl;
			}
		}

	}
}

void Reflect::parseFile(const std::vector<std::string>& args, const boost::filesystem::path & path, Reflect::OnHeaderParsedCb onHeaderParsedCb)
{
	std::cout << "Processing " << path << std::endl;

	std::string cppName = path.filename().string() + ".cpp";
	std::ifstream ifs(path.string());
	std::string str((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());

	ParseContext writeContext;
	writeContext.unitName = cppName;
	clang::tooling::runToolOnCodeWithArgs(new ReflectClassAction(&writeContext), str, args, cppName);
	onHeaderParsedCb(writeContext.header, path);
}

std::string GetEnumValueType(unsigned int bitWidth, bool isSigned)
{
	std::stringstream strstrm;
	if (!isSigned)
		strstrm << "u";
	strstrm << "int" << bitWidth << "_t";
	return strstrm.str();
}

unsigned int GetMinimumBitWidthForEnum(const boost::multiprecision::cpp_int &min, const boost::multiprecision::cpp_int &max)
{
	unsigned int min_bits = boost::multiprecision::msb(min)+1;
	unsigned int max_bits = boost::multiprecision::msb(max)+1;

	if (min < 0 & max > 0)
	{
		if (max_bits > min_bits)
			return max_bits + 1;
	}

	if (min_bits >= max_bits)
		return min_bits;
	else
		return max_bits;
}

std::string GetSmalletEnumType(const boost::multiprecision::cpp_int &min, const boost::multiprecision::cpp_int &max)
{
	unsigned int minBitWidth = GetMinimumBitWidthForEnum(min, max);
	// round to 8
	unsigned int bit8 = ((minBitWidth + 7) / 8) * 8;
	std::stringstream strstrm;
	if (min >= 0)
		strstrm << "u";

	strstrm << "int" << bit8 << "_t";
	return strstrm.str();
}

void Reflect::generateMetadataFile(const std::string &path, const Reflect::Header &header)
{
	std::ofstream ofs(path);
	std::string fileName = boost::filesystem::path(path).filename().string();

	std::string guardName = "__RECLECT_" + fileName + "__";
	boost::to_upper(guardName);
	boost::replace_all(guardName, " ", "_");
	boost::replace_all(guardName, ".", "_");

	ofs << "#ifndef " << guardName << std::endl;
	ofs << "#define " << guardName << std::endl;
	ofs << "/* This file was generated on " << boost::posix_time::second_clock::local_time() << " by Enseed Reflect */" << std::endl;
	ofs << std::endl;
	ofs << "#include <Reflect/Class.h>" << std::endl;
	ofs << std::endl;
	ofs << "namespace reflect {" << std::endl;
	for (const Reflect::Enum &e : header._enums)
	{
		ofs << "template<> struct Enum<" << e._name << ">" << std::endl;
		ofs << "{" << std::endl;
		unsigned int bitWidth = 0;
		bool isSigned;
		boost::multiprecision::cpp_int maxVal = 0;
		boost::multiprecision::cpp_int minVal = 0;
		if (!e._constants.empty())
		{
			maxVal = boost::multiprecision::cpp_int(e._constants.front()._value);
			minVal = boost::multiprecision::cpp_int(e._constants.front()._value);

			for (const Reflect::EnumConstant &k : e._constants)
			{
				bitWidth = std::max(bitWidth, k._bitWidth);
				isSigned = isSigned | k._isSigned;
				boost::multiprecision::cpp_int val(k._value);
				if (val < minVal)
					minVal = val;
				if (val > maxVal)
					maxVal = val;
			}
		}

		std::string valueType = GetEnumValueType(bitWidth, isSigned);
		ofs << "\t" << "typedef " << valueType << " value_type;" << std::endl;
		ofs << "\t" << "typedef " << GetSmalletEnumType(minVal, maxVal) << " value_smallest_type;" << std::endl;
		ofs << "\t" << "static constexpr value_type value_min = " << minVal << ";" << std::endl;
		ofs << "\t" << "static constexpr value_type value_max = " << maxVal << ";" << std::endl;
		ofs << "\t" << "static constexpr size_t  value_count = " << e._constants.size() << ";" << std::endl;
		ofs << std::endl;

		ofs << "\t" << "struct Values" << std::endl;
		ofs << "\t" << "{" << std::endl;

		for (const Reflect::EnumConstant &k : e._constants)
		{
			ofs << "\t\t" << "struct " << k._name << std::endl;
			ofs << "\t\t" << "{" << std::endl;
			ofs << "\t\t\t" << "static constexpr " << valueType << " = " << k._value << ";" << std::endl;
			ofs << "\t\t\t" << "static constexpr bool implicit = " << (k._implicit ? "true" : "false") << ";" << std::endl;
			ofs << "\t\t\t" << "static constexpr char name[] = \"" << k._name << "\";" << std::endl;
			ofs << "\t\t" << "};" << std::endl;
		}
		ofs << "\t" << "};" << std::endl;

		ofs << std::endl;
		ofs << "\t" << "template<typename CB> static void visitValues()" << std::endl;
		ofs << "\t" << "{" << std::endl;
		for (const Reflect::EnumConstant &k : e._constants)
		{
			ofs << "\t\t" << "CB::operator()(Values::" << k._name << "()));" << std::endl;
		}
		ofs << "\t" << "}" << std::endl;

		ofs << std::endl;
		ofs << "\t" << "template<typename CB> static void visitValues(CB &cb)" << std::endl;
		ofs << "\t" << "{" << std::endl;
		for (const Reflect::EnumConstant &k : e._constants)
		{
			ofs << "\t\t" << "cb(Values::" << k._name << "()));" << std::endl;
		}
		ofs << "\t" << "}" << std::endl;

		ofs << "};" << std::endl;

		ofs << std::endl;
		for (size_t i = 0; i < e._constants.size(); ++i)
		{
			ofs << "template<> class EnumValue<" << e._name << ", " << i << "> : public Enum<" << e._name << ">::Values::" << e._constants[i]._name << "{};" << std::endl;
		}
		ofs << std::endl;
	}



	ofs << std::endl;

	for (const Reflect::Class &c : header._classes)
	{
		ofs << std::endl;
		ofs << "template<> struct Class<" << c._name << ", 0> : public ClassBase<" << c._name << ">" << std::endl;
		ofs << "{" << std::endl;
		ofs << "\t" << "typedef " << c._name << " type;" << std::endl;
		ofs << "\t" << "static constexpr int parent_count = " << c._parents.size() << ";" << std::endl;
		ofs << "\t" << "static constexpr int field_count = " << c._fields.size() << " ;" << std::endl;
		ofs << "\t" << "static constexpr const char* name() { return \"" << c._name << "\"; }" << std::endl;
		ofs << std::endl;

		ofs << "\t" << "struct Fields" << std::endl;
		ofs << "\t" << "{" << std::endl;

		for (const Reflect::Field &f : c._fields)
		{
			ofs << "\t\t" << "struct " << f._name << std::endl;
			ofs << "\t\t" << "{" << std::endl;
			ofs << "\t\t\t" << "typedef " << f._name << " field_type;" << std::endl;
			ofs << "\t\t\t" << "typedef " << f._type._name << " type;" << std::endl;
			ofs << "\t\t\t" << "typedef const " << f._type._name << " const_type;" << std::endl;
			ofs << "\t\t\t" << "typedef " << c._name << " host_type;" << std::endl;
			ofs << "\t\t\t" << "typedef const " << c._name << " const_host_type;" << std::endl;
			ofs << "\t\t\t" << "static const char* name() { return \"" << f._name << "\"; }" << std::endl;
			ofs << "\t\t\t" << "static constexpr reflect::Visibility::Value visibility = " << Reflect::VisibilityString(f._visibility, c._kind) << ";" << std::endl;
			ofs << "\t\t\t" << "static const " << f._type._name << "& readRef(const " << c._name << " &target) { return target." << f._name << "; }" << std::endl;
			ofs << "\t\t\t" << "static " << f._type._name << "* writePtr(" << c._name << " *target) { return &target->" << f._name << "; }" << std::endl;
			ofs << "\t\t" << "};" << std::endl;
		}

		ofs << "\t" << "};" << std::endl;

		ofs << std::endl;
		ofs << "\t" << "template<typename CB> static void visitParents(CB &cb = CB())" << std::endl;
		ofs << "\t" << "{" << std::endl;
		for (const Reflect::Parent &p : c._parents)
		{
			ofs << "\t\t" << "cb(Class<" << p._name << ">());" << std::endl;
		}
		ofs << "\t" << "}" << std::endl;

		ofs << std::endl;
		ofs << "\t" << "template<typename CB> static void visitFields(CB &cb = CB())" << std::endl;
		ofs << "\t" << "{" << std::endl;
		for (const Reflect::Field &f : c._fields)
		{
			ofs << "\t\t" << "cb(Fields::" << f._name << "());" << std::endl;
		}
		ofs << "\t" << "}" << std::endl;


		ofs << "};" << std::endl;

		ofs << std::endl;

		int i = 0;
		for (const Reflect::Field &field : c._fields)
		{
			ofs << "template<> struct Field<" << c._name << ", " << i++ << "> : public Class<" << c._name << ">::Fields::" << field._name << "{};" << std::endl;
		}

		ofs << std::endl;

		std::set<std::string> sortedNames;
		for (const Reflect::Field &field : c._fields)
		{
			sortedNames.insert(field._name);
		}

		i = 0;
		for (const std::string &entry : sortedNames)
		{
			ofs << "template<> struct SortedField<" << c._name << ", " << i++ << "> : public Class<" << c._name << ">::Fields::" << entry << "{};" << std::endl;
		}
	}



	ofs << std::endl;
	ofs << "} // namespace reflect" << std::endl;
	ofs << std::endl;

	ofs << "#endif // " << guardName << std::endl;
}

bool Reflect::isValidSourceFile(const boost::filesystem::path & path)
{
	if (!is_regular_file(path))
		return false;
	
	std::string ext = path.extension().string();

	return  (ext == ".h" || ext == ".hpp" || ext == ".hh");
}
