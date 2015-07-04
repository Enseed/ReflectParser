#include "Precompiled.h"

#include <windows.h>
#include <string>
#include <vector>
#include <iostream>

#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>

#include "Reflect.h"
#include "Header.h"

int main(int argc, char** argv)
{
	return WinMain(nullptr, nullptr, nullptr, 0);
}


int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	std::string kTAB = "\t";
	std::string ns = std::string();
	std::string incPrefix = std::string();
	bool noUnion = false;

	try {
		boost::filesystem::path schemaPath = boost::filesystem::current_path();
		boost::filesystem::directory_iterator iter(schemaPath), eod;
		std::cout << "Looking for header files at " << schemaPath << std::endl;

		for (boost::filesystem::path const& file : iter)
		{
			std::string extension = file.extension().string();
			if (is_regular_file(file) && file.extension() == ".h")
			{
				std::string fileName = file.filename().string();
				std::string srcPath = file.string();
				std::string dstPath = file.parent_path().append("generated").append("Class_" + fileName).string();

				std::ifstream in(srcPath);
				std::ofstream out(dstPath);
				std::cout << "Generating " << dstPath << " from " << srcPath << std::endl;

				ParsedHeader parsedHeader;
				Reflect::parseHeaderFile(srcPath, &parsedHeader);
				Reflect::generateMetadataFile(dstPath, parsedHeader);
			}
		}
	}
	catch (...)
	{
	}

	return 0;
}

#if 0




#include <fstream>
#include <windows.h>


#include <ctype.h>
#ifndef _WIN32
#include <sys/time.h>
#endif
#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <vector>

#include <boost/lexical_cast.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>

// #include <boost/algorithm/string.hpp>
// 
// #include <boost/random/mersenne_twister.hpp>
// #include <boost/random/uniform_int.hpp>
// #include <boost/random/variate_generator.hpp>


using std::ostream;
using std::ifstream;
using std::ofstream;
using std::map;
using std::set;
using std::string;
using std::vector;

using boost::lexical_cast;

static const std::string kNS("namespace");
static const std::string kOUT("output");
static const std::string kIN("input");
static const std::string kINCLUDE_PREFIX("include-prefix");
static const std::string kNO_UNION_TYPEDEF("no-union-typedef");

#include "Class.h"




#include <boost/algorithm/string.hpp>
#include <Generic/Text/StringManip.h>
#include "Introspection/MetaType.h"

class Strings
{
public:
	static void Trim(std::string &str)
	{
		return boost::trim(str);
	}

	static bool StartsWith(const std::string &str, const std::string &pattern, bool caseSensitive = true)
	{
		if (caseSensitive)
			return boost::starts_with(str, pattern);
		else
			return boost::istarts_with(str, pattern);
	}

	static std::vector<std::string> Split(const std::string &str)
	{
		return seed::StringManip::splitstr(str);
	}

	static std::vector<std::string> Split(const std::string &str, char sep)
	{
		return seed::StringManip::splitstr(str, sep);
	}

	static std::string ReplaceAll(const std::string &str, const std::string &pattern, const std::string &replaceBy)
	{
		return boost::replace_all_copy(str, pattern, replaceBy);
	}
};


template<typename T, typename TOBJ>
inline bool instanceof(const TOBJ* obj) {
	return dynamic_cast<const T*>(obj) != nullptr;
}


class MetaTypeMapping
{
public:
	MetaTypeMapping()
	{}

	MetaTypeMapping(const std::string &iType, const std::string &iHeader)
	{
		header = iHeader;
		type = iType;
	}

	std::string header;
	std::string type;
};

std::map<std::string, MetaTypeMapping> TypeMapping;


class MetaParser
{
public:

	MetaParser()
	{
		TypeMapping.clear();
		TypeMapping["META_TIMESTAMP"] = MetaTypeMapping("boost::posix_time::ptime", "<boost/date_time.hpp>");
		TypeMapping["META_UUID"] = MetaTypeMapping("boost::uuids::uuid", "<boost/uuid/uuid.hpp>");
	}

	std::string kTAB = "\t";


	class Element
	{
	public:
		virtual ~Element() {}
	};

	class Blank : public Element
	{
	public:
		Blank()
		{}
	};

	class BeginStruct : public Element
	{
	public:
		BeginStruct()
		{}
	};

	class EndStruct: public Element
	{
	public:
		EndStruct()
		{}
	};


	class Header : public Element
	{
	public:
		Header(const std::string &iHeader)
		{
			_header = iHeader;
		}

		const std::string& header() const { return _header; }

	private:
		std::string _header;
	};


	class Preprocessor : public Element
	{
	public:
		Preprocessor(const std::string &iPreprocessor)
		{
			_preprocessor = iPreprocessor;
		}

		const std::string& preprocessor() const { return _preprocessor; }

	private:
		std::string _preprocessor;
	};

	class Struct: public Element
	{
	public:
		Struct(const std::string &iName)
		{
			_name = iName;
		}

		const std::string& name() const { return _name; }

	private:
		std::string _name;
	};

	class Comment : public Element
	{
	public:
		Comment(const std::string &iComment)
		{
			_comment = iComment;
		}

		const std::string& comment() const { return _comment; }

	private:
		std::string _comment;
	};

	class Member : public Element
	{
	public:
		Member(const std::string &iType, const std::string &iName)
		{
			setType(iType);
			_name = iName;
		}

		const std::string& type() const { return _type; }
		void setType(const std::string &iType) { _type = iType;  }

		const std::string& name() const { return _name; }

	private:
		std::string _type;
		std::string _name;
	};

	typedef enum
	{
		LOOKING_FOR_STRUCT,
		LOOKING_FOR_MEMBERS
	} eState;

	eState _state;
	std::string _structName;

	std::vector<MetaParent*> _parents;
	std::vector<Element*> _structure;
	std::vector<MetaAnnotation*> _annotations;


	void setState(eState iState)
	{
		_state = iState;
	}

	void setStructName(const std::string &iStructName)
	{
		_structName = iStructName;
	}

	void addMember(const std::string &paramType, const std::string &paramName)
	{
		_structure.push_back(new Member(paramType, paramName));
	}

	void addComment(const std::string &iComment)
	{
		_structure.push_back(new Comment(iComment));
	}

	void addHeader(const std::string &iHeader)
	{
		_structure.push_back(new Header(iHeader));
	}

	void addParent(const std::string &iParent)
	{
		MetaParent *parent = new MetaParent(std::string(), false, false);

		std::vector<std::string> parts = Strings::Split(iParent);
		for (auto part : parts)
		{
			if (part == "public")
				parent->isPublic = true;
			else if (part == "virtual")
				parent->isVirtual = true;
			else
				parent->name = part;
		}
		_parents.push_back(parent);
	}

	void addAnnotation(const std::string &annotation)
	{
		MetaAnnotation *ann = new MetaAnnotation();
		std::string content = annotation.substr(1, annotation.length()-2);
		std::vector<std::string> valuePairs = Strings::Split(content, ',');
		bool first = true;
		for (auto valuePair : valuePairs)
		{
			std::vector<std::string> param = Strings::Split(valuePair, '=');
			for (std::string &str : param)
			{
				Strings::Trim(str);
			}

			if (first)
				ann->name = param[0];


			if (param.size() > 1)
				ann->attributes[param[0]] = param[1];

			first = false;
		}

		_annotations.push_back(ann);
	}


	void addPreprocessor(const std::string iPreprocessor)
	{
		_structure.push_back(new Preprocessor(iPreprocessor));
	}

	void addBlank()
	{
		_structure.push_back(new Blank());
	}

	void addStruct(const std::string &iStructName)
	{
		_structure.push_back(new Struct(iStructName));
	}

	void addBeginStruct()
	{
		_structure.push_back(new BeginStruct());
	}

	void addEndStruct()
	{
		_structure.push_back(new EndStruct());
	}

	void addRequiredIncludes()
	{
		for (Element *elem : _structure)
		{
			if (instanceof<Member>(elem))
			{
				Member *member = static_cast<Member*>(elem);
				auto mappedType = TypeMapping.find(member->type());
				if (mappedType != TypeMapping.end())
				{
					member->setType(mappedType->second.type);
					addHeaderIfMissing(mappedType->second.header);
				}
			}
		}
	}

	std::set<std::string> _missingHeaders;
	void addHeaderIfMissing(const std::string &header)
	{
		auto found = _missingHeaders.find(header);
		if (found == _missingHeaders.end())
		{
			_missingHeaders.insert(header);
		}
	}

	void writeTo(const std::string &fileName, std::ostream &ostream, std::vector<MetaType> *outMetaTypes)
	{
		addRequiredIncludes();

		MetaType type;
		type.definition = fileName;

		for (Element *elem : _structure)
		{
			if (instanceof<Preprocessor>(elem))
			{
				ostream << static_cast<Preprocessor*>(elem)->preprocessor() << std::endl;
			}
			if (instanceof<Header>(elem))
			{
				ostream << "#include " << static_cast<Header*>(elem)->header() << std::endl;
				type.dependencies.push_back(static_cast<Header*>(elem)->header());
			}
			else if (instanceof<Struct>(elem))
			{
				if (!_missingHeaders.empty())
				{
					for (const std::string &header : _missingHeaders)
					{
						ostream << "#include " << header << std::endl;
						type.dependencies.push_back(header);
					}
					ostream << std::endl;
				}
				ostream << "struct " << static_cast<Struct*>(elem)->name();
				type.name = static_cast<Struct*>(elem)->name();

				if (!_parents.empty())
				{
					ostream << ":";
					bool first = true;

					for (auto parent : _parents)
					{
						if (first)
							ostream << "";
						else
							ostream << ",";

						if (parent->isVirtual)
							ostream << " virtual";
						
						if (parent->isPublic)
							ostream << " public";
						else
							ostream << " private";

						ostream << " " << parent->name;

						first = false;
						type.parents.push_back(*parent);
					}
				}

				ostream << std::endl;
			}
			else if (instanceof<BeginStruct>(elem))
			{
				ostream << "{" << std::endl;
			}
			else if (instanceof<EndStruct>(elem))
			{
				ostream << "};" << std::endl;
			}
			else if (instanceof<Blank>(elem))
			{
				ostream << std::endl;
			}
			else if (instanceof<Member>(elem))
			{
				Member *member = static_cast<Member*>(elem);
				ostream << kTAB << member->type() << " " << member->name() << ";" << std::endl;
				type.members.push_back(MetaMember(member->type(), member->name()));
			}
		}
		outMetaTypes->push_back(type);
	}
};



int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	std::string kTAB = "\t";
	std::string ns = std::string();
	std::string incPrefix = std::string();
	bool noUnion = false;

	try {
		std::vector<std::string> generatedFiles;
		std::vector<MetaType> generatedTypes;

		char currentDirectory[4096];
		boost::filesystem::path schemaPath = boost::filesystem::current_path().append("schema");
		boost::filesystem::directory_iterator iter(schemaPath), eod;

		for(boost::filesystem::path const& i : iter)
		{
			if (is_regular_file(i) && i.extension() == "h")
			{
				string inf = file->value();
				ifstream in(inf);

				seed::Path path(file->value());
				seed::Path outPath = path.parent();
				outPath.append("generated");
				outPath.append(path.fileNameWithoutExtension() + ".h");
				std::string outf = outPath.str();
				ofstream out(outf);
				ReflectClass(outPath.fileName(), in, out, &generatedTypes);
				generatedFiles.push_back(outPath.fileName());
			}
		}

		// create meta include file
		{
			seed::Path outPath(path->value());
			outPath.append("generated");
			outPath.append("meta.h");
			std::string outf = outPath.str();
			ofstream out(outf);
			for (auto generated : generatedFiles)
			{
				out << "#include \"" << generated << "\"" << std::endl;
			}
			out << std::endl;

			out << "void MetaGenerate() {" << std::endl;

			for (auto generated : generatedTypes)
			{
				out << "\t{" << std::endl;
				out << "\t\tMetaType type;" << std::endl;
				out << "\t\ttype.name = \"" << generated.name << "\";" << std::endl;
				out << "\t\ttype.definition = \"" << generated.definition << "\";" << std::endl;
				for (auto member : generated.members)
				{
					out << "\t\ttype.members.push_back(MetaMember(\"" << member.rawType
						<< "\", \"" << member.name << "\""
// 						<< ", " << (member.isVector ? "true" : "false")
// 						<< ", " << (member.isMap ? "true" : "false")
// 						<< ", " << (member.isComplex ? "true" : "false")
// 						<< ", " << (member.isRef ? "true" : "false")
// 						<< ", " << (member.isOptional ? "true" : "false")
// 						<< ", \"" << member.keyType << "\""
// 						<< ", \"" << member.valueType << "\""
						<< "));" << std::endl;
				}
				for (auto header : generated.dependencies)
				{
					std::string headerStr = Strings::ReplaceAll(header, "\"", "\\\"");
					out << "\t\ttype.dependencies.push_back(\"" << headerStr << "\");" << std::endl;
				}
				for (auto parent : generated.parents)
				{
					out << "\t\ttype.parents.push_back(MetaParent(\"" << parent.name << "\", " << (parent.isPublic ? "true" : "false") << ", " << (parent.isVirtual ? "true" : "false") << "));" << std::endl;
				}
				out << "\t\tGenerateType<" << generated.name << ">(type);" << std::endl;
				out << "\t}" << std::endl;
			}

			out << "}" << std::endl;
			out.close();
		}

		std::map<std::string, const MetaType*> nameMapping;
		for (const MetaType &generated : generatedTypes)
		{
			nameMapping[generated.name] = &generated;
		}
		
		std::map<const MetaType*, std::vector<const MetaType*>> parentMapping;
		for (const MetaType &generated : generatedTypes)
		{
			for (const MetaParent &parent : generated.parents)
			{
				auto found = nameMapping.find(parent.name);
				const MetaType *parentType;
				if (found == nameMapping.end())
				{
					MetaType *unknown = new MetaType();
					unknown->name = parent.name;
					unknown->definition = parent.name + ".h";
					nameMapping[unknown->name] = unknown;
					parentType = unknown;
				}
				else
				{
					parentType = found->second;
				}
				parentMapping[parentType].push_back(&generated);
			}
		}

		// create parent-child mapping
		{
			{
				seed::Path outPath(path->value());
				outPath.append("generated");
				outPath.append("meta_mapping.h");
				std::string outf = outPath.str();
				ofstream out(outf);

				out << "#pragma once" << std::endl;
				out << std::endl;
				out
					<< "template<typename T, typename CB> struct TPolymorphToGeneric" << std::endl
					<< "{};" << std::endl
					<< std::endl
					<< "template<typename T, typename CB> void PolymorphToGeneric(T *obj, CB &iFunctor)" << std::endl
					<< "{" << std::endl
					<< kTAB << "TPolymorphToGeneric<T,CB>::Map(obj, iFunctor);" << std::endl
					<< "}"
					<< "template<typename T, typename CB> void PolymorphToGeneric(const T *obj, CB &iFunctor)" << std::endl
					<< "{" << std::endl
					<< kTAB << "TPolymorphToGeneric<T,CB>::Map(obj, iFunctor);" << std::endl
					<< "}";

				out.close();

			}

			for (auto parentChildren : parentMapping)
			{
				const MetaType &parent = *parentChildren.first;
				seed::Path outPath(path->value());
				outPath.append("generated");
				outPath.append(parent.name + "_mapping.h");
				std::string outf = outPath.str();
				ofstream out(outf);

				out << "#pragma once" << std::endl;
				out << std::endl;

				std::set<std::string> dependencies;
				dependencies.insert(parent.definition);
				for (auto child : parentChildren.second)
				{
					dependencies.insert(child->definition);
				}

				out << "#include \"meta_mapping.h\"" << std::endl;
				for (auto dependency : dependencies)
				{
					out << "#include \"" << dependency << "\"" << std::endl;
				}
				out << std::endl;

				out << "template<typename CB> struct TPolymorphToGeneric<" << parent.name << ", CB >" << std::endl;
				out << "{" << std::endl;
				out << kTAB << "static void Map(" << parent.name << " *obj, CB &iFunctor)" << std::endl;
				out << kTAB << "{" << std::endl;
				for (auto child : parentChildren.second)
				{
					out << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << child->name << " *subType = dynamic_cast<" << child->name << "*>(obj);" << std::endl;
					out << kTAB << kTAB << kTAB << "if (subType != nullptr)" << std::endl;
					out << kTAB << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << kTAB << "iFunctor(subType);" << std::endl;
					out << kTAB << kTAB << kTAB << "}" << std::endl;
					out << kTAB << kTAB << "}" << std::endl;
				}
				out << kTAB << "}" << std::endl;
				out << kTAB << "static void Map(const " << parent.name << " *obj, CB &iFunctor)" << std::endl;
				out << kTAB << "{" << std::endl;
				for (auto child : parentChildren.second)
				{
					out << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << "const " << child->name << " *subType = dynamic_cast<const " << child->name << "*>(obj);" << std::endl;
					out << kTAB << kTAB << kTAB << "if (subType != nullptr)" << std::endl;
					out << kTAB << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << kTAB << "iFunctor(subType);" << std::endl;
					out << kTAB << kTAB << kTAB << "}" << std::endl;
					out << kTAB << kTAB << "}" << std::endl;
				}
				out << kTAB << "}" << std::endl;
				out << "};" << std::endl;
				out << std::endl;
				for (auto child : parentChildren.second)
				{
					out << "template<typename CB> struct TPolymorphToGeneric<" << child->name << ", CB >" << std::endl;
					out << "{" << std::endl;
					out << kTAB << "static void Map(" << child->name << " *obj, CB &iFunctor)" << std::endl;
					out << kTAB << "{" << std::endl;
					out << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << child->name << " *subType = dynamic_cast<" << child->name << "*>(obj);" << std::endl;
					out << kTAB << kTAB << kTAB << "if (subType != nullptr)" << std::endl;
					out << kTAB << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << kTAB << "iFunctor(subType);" << std::endl;
					out << kTAB << kTAB << kTAB << "}" << std::endl;
					out << kTAB << kTAB << "}" << std::endl;
					out << kTAB << "}" << std::endl;
					out << kTAB << "static void Map(const " << child->name << " *obj, CB &iFunctor)" << std::endl;
					out << kTAB << "{" << std::endl;
					out << kTAB << kTAB << "iFunctor(obj);" << std::endl;
					out << kTAB << "}" << std::endl;
					out << "};" << std::endl;
				out << std::endl;
				}
				out << std::endl;

				std::string kBasicTypes[] = {
					"char",
					"bool",
					"short",
					"int",
					"long",
					"long long",
					"float",
					"double",
					"std::string"
				};
				std::set<std::string> allBasicTypes(std::begin(kBasicTypes), std::end(kBasicTypes));
				for (auto type : TypeMapping)
				{
					allBasicTypes.insert(type.second.type);
				}

				out << "template<typename CB> void TypeidToGeneric(const type_info &type, CB &iFunctor)" << std::endl;
				out << "{" << std::endl;
				for (auto child : parentChildren.second)
				{
					out << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << "if (type == typeid(" << child->name << "))" << std::endl;
					out << kTAB << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << kTAB << "iFunctor.operator()<" << child->name << ">();" << std::endl;
					out << kTAB << kTAB << kTAB << kTAB << "return;" << std::endl;
					out << kTAB << kTAB << kTAB << "}" << std::endl;
					out << kTAB << kTAB << "}" << std::endl;
				}
				for (auto child : allBasicTypes)
				{
					out << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << "if (type == typeid(" << child << "))" << std::endl;
					out << kTAB << kTAB << kTAB << "{" << std::endl;
					out << kTAB << kTAB << kTAB << kTAB << "iFunctor.operator()<" << child << ">();" << std::endl;
					out << kTAB << kTAB << kTAB << kTAB << "return;" << std::endl;
					out << kTAB << kTAB << kTAB << "}" << std::endl;
					out << kTAB << kTAB << "}" << std::endl;
				}
				out << "}" << std::endl;

				out.close();
			}
		}

		return 0;
	}
	catch (std::exception &e) {
		std::cerr << "Failed to parse or compile schema: "
			<< e.what() << std::endl;
		return 1;
	}

	return 0;
}

#endif
