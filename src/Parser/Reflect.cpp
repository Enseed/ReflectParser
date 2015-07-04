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

#pragma warning(pop)

#include <boost/multiprecision/cpp_int.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>


#include "Reflect.h"
#include "Header.h"
#include <fstream>
#include <iostream>

class ParseContext
{
public:
	ParsedHeader *_parsedHeader;
	std::string _cppName;
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

ParsedHeader::Visibility GetVisibility(clang::AccessSpecifier visibility)
{
	switch (visibility)
	{
	case clang::AS_public:
		return ParsedHeader::ePUBLIC;
	case clang::AS_protected:
		return ParsedHeader::ePROTECTED;
	case clang::AS_private:
		return ParsedHeader::ePRIVATE;
	case clang::AS_none:
	default:
		return ParsedHeader::eNONE;
	}
}

class EnumVisitor : public clang::RecursiveASTVisitor < EnumVisitor >
{
private:
	ParsedHeader::Enum *_enum;

public:
	EnumVisitor(ParsedHeader::Enum *c)
		: _enum(c)
	{}

	bool VisitEnumConstantDecl(clang::EnumConstantDecl *Declaration)
	{
		_enum->_constants.emplace_back();
		ParsedHeader::EnumConstant &enumconst = _enum->_constants.back();
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
	ParsedHeader::Class *_class;
	clang::ASTContext *_context;

public:
	TypeVisitor(clang::ASTContext *context, ParsedHeader::Class *c)
		: _context(context)
		, _class(c)
	{}

	bool VisitFieldDecl(clang::FieldDecl *Declaration)
	{
		std::string sourceName = _context->getSourceManager().getFilename(Declaration->getLocStart()).str();

		_class->_fields.emplace_back();
		ParsedHeader::Field &field = _class->_fields.back();
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
		if (sourceName != _parsingContext->_cppName)
			return true; // ignore

		std::cout << "<" << __FUNCTION__ <<  ">" << std::endl;
		Declaration->dump();
		std::cout << "</" <<  __FUNCTION__ << ">" << std::endl;
		return true;
	}

	bool VisitEnumDecl(clang::EnumDecl *Declaration)
	{
		std::string sourceName = _context->getSourceManager().getFilename(Declaration->getLocStart()).str();
		if (sourceName != _parsingContext->_cppName)
			return true; // ignore

		_parsingContext->_parsedHeader->_enums.emplace_back();
		ParsedHeader::Enum &e = _parsingContext->_parsedHeader->_enums.back();

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
		if (sourceName != _parsingContext->_cppName)
			return true; // ignore

		_parsingContext->_parsedHeader->_classes.emplace_back();
		ParsedHeader::Class &c = _parsingContext->_parsedHeader->_classes.back();

		c._filename = sourceName;
		c._line = _context->getSourceManager().getSpellingLineNumber(Declaration->getLocStart());
		c._kind = Declaration->getKindName().str();
		c._name = Declaration->getName().str();



		// namespace 
		c._namespace = GetNamespace(Declaration);

		// parents
		for (const auto &I : Declaration->bases()) {
			c._parents.emplace_back();
			ParsedHeader::Parent &parent = c._parents.back();
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


void Reflect::parseHeaderFile(const std::string &path, ParsedHeader *parsedHeader)
{
	std::string cppName = boost::filesystem::path(path).filename().string() + ".cpp";
	std::vector<std::string> args;
	args.push_back("-IC:\\Work\\Public\\Reflect\\External");
	args.push_back("-IC:\\Work\\Enseed_svn\\trunk\\ThirdParty\\boost");
	args.push_back("-IC:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.10056.0\\ucrt");
	args.push_back("-fms-compatibility-version=19.00.22609");
	std::ifstream ifs(path);
	std::string str((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());

	ParseContext writeContext;
	writeContext._parsedHeader = parsedHeader;
	writeContext._cppName = cppName;
	clang::tooling::runToolOnCodeWithArgs(new ReflectClassAction(&writeContext), str, args, cppName);
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

void Reflect::generateMetadataFile(const std::string &path, const ParsedHeader &parsedHeader)
{
	std::ofstream ofs(path);
	std::string fileName = boost::filesystem::path(path).filename().string();

	std::string guardName = "__RECLECT_" + fileName + "__";
	boost::to_upper(guardName);
	boost::replace_all(guardName, " ", "_");
	boost::replace_all(guardName, ".", "_");

	ofs << "#ifndef " << guardName << std::endl;
	ofs << "#define " << guardName << std::endl;
	ofs << std::endl;
	ofs << "#include <Enseed/Reflect/Class.h>" << std::endl;
	ofs << std::endl;
	ofs << "namespace reflect {" << std::endl;
	for (const ParsedHeader::Enum &e : parsedHeader._enums)
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

			for (const ParsedHeader::EnumConstant &k : e._constants)
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

		for (const ParsedHeader::EnumConstant &k : e._constants)
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
		for (const ParsedHeader::EnumConstant &k : e._constants)
		{
			ofs << "\t\t" << "CB::operator()(Values::" << k._name << "()));" << std::endl;
		}
		ofs << "\t" << "}" << std::endl;

		ofs << std::endl;
		ofs << "\t" << "template<typename CB> static void visitValues(CB &cb)" << std::endl;
		ofs << "\t" << "{" << std::endl;
		for (const ParsedHeader::EnumConstant &k : e._constants)
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

	for (const ParsedHeader::Class &c : parsedHeader._classes)
	{
		ofs << std::endl;
		ofs << "template<> struct Class<" << c._name << ", 0> : public ClassBase<" << c._name << ">" << std::endl;
		ofs << "{" << std::endl;
		ofs << "\t" << "typedef " << c._name << " type;" << std::endl;
		ofs << "\t" << "static constexpr int parent_count = " << c._parents.size() << ";" << std::endl;
		ofs << "\t" << "static constexpr int field_count = " << c._fields.size() << " ;" << std::endl;
		ofs << std::endl;

		ofs << "\t" << "struct Fields" << std::endl;
		ofs << "\t" << "{" << std::endl;

		for (const ParsedHeader::Field &f : c._fields)
		{
			ofs << "\t\t" << "struct " << f._name << std::endl;
			ofs << "\t\t" << "{" << std::endl;
			ofs << "\t\t\t" << "typedef " << f._name << " field_type;" << std::endl;
			ofs << "\t\t\t" << "typedef " << f._type._name << " type;" << std::endl;
			ofs << "\t\t\t" << "typedef const " << f._type._name << " const_type;" << std::endl;
			ofs << "\t\t\t" << "typedef " << c._name << " host_type;" << std::endl;
			ofs << "\t\t\t" << "typedef const " << c._name << " const_host_type;" << std::endl;
			ofs << "\t\t\t" << "static const char* name() { return \"" << f._name << "\"; }" << std::endl;
			ofs << "\t\t\t" << "static constexpr reflect::Visibility::Value visibility = " << ParsedHeader::VisibilityString(f._visibility, c._kind) << ";" << std::endl;
			ofs << "\t\t\t" << "static const " << f._type._name << "& readRef(const " << c._name << " &target) { return target." << f._name << "; }" << std::endl;
			ofs << "\t\t\t" << "static " << f._type._name << "* writePtr(" << c._name << " *target) { return &target->" << f._name << "; }" << std::endl;
			ofs << "\t\t" << "};" << std::endl;
		}

		ofs << "\t" << "};" << std::endl;

		ofs << std::endl;
		ofs << "\t" << "template<typename CB> static void visitParents(CB &cb = CB())" << std::endl;
		ofs << "\t" << "{" << std::endl;
		for (const ParsedHeader::Parent &p : c._parents)
		{
			ofs << "\t\t" << "cb(Class<" << p._name << ">());" << std::endl;
		}
		ofs << "\t" << "}" << std::endl;

		ofs << std::endl;
		ofs << "\t" << "template<typename CB> static void visitFields(CB &cb = CB())" << std::endl;
		ofs << "\t" << "{" << std::endl;
		for (const ParsedHeader::Field &f : c._fields)
		{
			ofs << "\t\t" << "cb(Fields::" << f._name << "());" << std::endl;
		}
		ofs << "\t" << "}" << std::endl;


		ofs << "};" << std::endl;

		ofs << std::endl;

		int i = 0;
		for (const ParsedHeader::Field &field : c._fields)
		{
			ofs << "template<> struct Field<" << c._name << ", " << i++ << "> : public Class<" << c._name << ">::Fields::" << field._name << "{};" << std::endl;
		}

		ofs << std::endl;

		std::set<std::string> sortedNames;
		for (const ParsedHeader::Field &field : c._fields)
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

#if 0


using namespace clang;



class FindNamedClassAction : public clang::ASTFrontendAction {
public:
	virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(
		clang::CompilerInstance &Compiler, llvm::StringRef InFile) {
		return std::unique_ptr<clang::ASTConsumer>(
			new FindNamedClassConsumer(&Compiler.getASTContext()));
	}
};

int main(int argc, char **argv) {
	if (argc > 1) {
		clang::tooling::runToolOnCode(new FindNamedClassAction, argv[1]);
	}
}

#endif 
#if 0



#include "Reflect.h"

#include <vector>
#include <string>
#include <map>

#include <Enseed/Generic/Strings/Strings.h>
#include <Enseed/Generic/CountPtr/CountPtr.h>
#include "boost/regex.hpp"
#include <boost/algorithm/string.hpp>
#include "ClassHeader.h"
#include <clang/include/clang/Tooling/Tooling.h>

#include <iostream>
#include <fstream>

#include "clang/Tooling/CommonOptionsParser.h"
#include "llvm/Support/CommandLine.h"

using namespace clang::tooling;

// Apply a custom category to all command-line options so that they are the
// only ones displayed.
static llvm::cl::OptionCategory MyToolCategory("my-tool options");

int main(int argc, const char **argv) {
	std::vector<std::string> Sources;
	Sources.push_back("a.cc");


	// CommonOptionsParser constructor will parse arguments and create a
	// CompilationDatabase.  In case of error it will terminate the program.
	CommonOptionsParser OptionsParser(argc, argv, MyToolCategory);

	// Use OptionsParser.getCompilations() and OptionsParser.getSourcePathList()
	// to retrieve CompilationDatabase and the list of input file paths.
}


class Strings
{
public:
	static void Trim(std::string &str)
	{
		return boost::trim(str);
	}


	static std::vector<std::string> Split(const std::string &str)
	{
		return sd::Strings::splitstr(str);
	}

	static std::vector<std::string> Split(const std::string &str, char sep)
	{
		return sd::Strings::splitstr(str, sep);
	}

	static std::string ReplaceAll(const std::string &str, const std::string &pattern, const std::string &replaceBy)
	{
		return boost::replace_all_copy(str, pattern, replaceBy);
	}

};

class CPPHeaderParser
{
	class IState;
	typedef sd::CountPtr<IState> StateRef;

	class IState
	{
	public:
		virtual ~IState(){}
		virtual StateRef execute() = 0;
	};

	class State : public IState
	{
	protected:
		StateRef _ref;
		StateRef _context;
		CPPHeader *_header;
		std::istream *_istream;

	public:
		void initialize(const StateRef &ref, const StateRef &context, CPPHeader *header, std::istream *istream)
		{
			_ref = ref;
			_context = context;
			_header = header;
			_istream = istream;
		}

		template<class T>
		StateRef create()
		{
			sd::CountPtr<T> state(new T);
			state->initialize(state, _context, _header, _istream);
			return state;
		}

		template<class T>
		StateRef pushState()
		{
			return create<T>();
		}

		StateRef popState()
		{
			return _context;
		}

		std::string peekLine()
		{
			std::string line;
			std::streampos sp = _istream->tellg();
			line = readLine();
			_istream->seekg(sp);
			return line;
		}

		std::string readLine()
		{
			std::string line;
			std::getline(*_istream, line);
			return line;
		}

		void skipLine()
		{
			readLine();
		}

		std::string peekWord()
		{
			std::string word;
			std::streampos sp = _istream->tellg();
			word = readWord();
			_istream->seekg(sp);
			return word;
		}

		std::string readWord()
		{
			std::string word;
			*_istream >> word;
			return word;
		}

		void skipWord()
		{
			readWord();
		}
	};

	class RootState : public State
	{
	public:
		static StateRef create(CPPHeader *header, std::istream *istream)
		{
			sd::CountPtr<RootState> state(new RootState());
			state->initialize(StateRef(), StateRef(), header, istream);
			return state;
		}

		virtual StateRef execute() override
		{
			std::string word = peekWord();
			if (sd::Strings::beginsWith(word, "//"))
			{
				return pushState<LineCommentState>();
			}
			else if (sd::Strings::beginsWith(word, "/*"))
			{
				return pushState<BlockCommentState>();
			}
			else if (std::String::beginsWith(word, "#"))
			{
				return pushState<PreprocessorState>();
			}
		}
	};

	class LineCommentState : public State
	{
		virtual StateRef execute() override
		{
			std::string word = peekWord();
			bool skipNext = false;
			while (skipNext || sd::Strings::beginsWith(word, "//"))
			{
				std::string line = readLine();
				skipNext = sd::Strings::endsWith(line, "\\");
			}
			return popState();
		}
	};

	class BlockCommentState : public State
	{
		virtual StateRef execute() override
		{
			std::string word = peekWord();
			while (sd::Strings::endsWith(word, "*/"))
			{
				skipWord();
			}
			return popState();
		}
	};

	class PreprocessorState : public State
	{
		virtual StateRef execute() override
		{
			std::string line = peekLine();
			std::vector<std::string> words = sd::Strings::splitstr(line);

			std::string command;
			if (words[0] == "#")
			{
				if (words.size() < 2)
				{
					throw std::exception("Invalid preprocessor command");
				}
				command = words[1];
			}
			else
			{
				command = words[0].substr(1);
			}

			if (command == "include")
			{
				return pushState<IncludeState>();
			}
			else
			{
				// ignore skip for now
			}
		}
	};

public:
	StateRef _state;

	CPPHeaderParser(CPPHeader *header, std::istream *istream)
	{
		_state = RootState::create(header, istream);
	}

	StateRef state() { return _state;  }
	void execute()
	{
		_state = _state->execute();
	}
};


sd::AutoPtr<CPPHeader> Reflect::parseHeaderFile(const std::string &path)
{
	std::ifstream istream(path);

	sd::AutoPtr<CPPHeader> headerFile = new CPPHeader;
	CPPHeaderParser parser(headerFile.ptr(), &istream);
	while (parser.state() != nullptr)
	{
		parser.execute();
	}
	return headerFile.givePtr();
}


#endif 