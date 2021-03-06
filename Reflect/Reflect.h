#pragma once

#include <string>
#include <vector>
#include <string>
#include <map>
#include <set>

class Reflect
{
public:
	typedef enum
	{
		ePUBLIC,
		ePROTECTED,
		ePRIVATE,
		eNONE
	} Visibility;

	static std::string VisibilityString(Visibility v, const std::string &kind)
	{
		switch (v)
		{
		case ePUBLIC: return "reflect::Visibility::PUBLIC";
		case ePRIVATE: return "reflect::Visibility::PRIVATE";
		case ePROTECTED: return "reflect::Visibility::PROTECTED";
		default:
		case eNONE:
			return (kind == "class" ? "reflect::Visibility::PRIVATE" : "reflect::Visibility::PUBLIC");
		}
	}

	struct Type
	{
		std::string _filename;
		int _line;
		std::string _kind;
		std::string _name;
		std::string _namespace;
	};

	struct Field
	{
		std::string _filename;
		int _line;
		std::string _name;
		Visibility _visibility;
		bool _hasConst;
		bool _hasRestrict;
		bool _hasVolatile;
		Type _type;
		Type _canonicalType;
	};

	struct Parent
	{
		std::string _filename;
		int _line;
		std::string _name;
		std::string _namespace;
		bool _virtual;
		Visibility _visibility;
	};

	struct Class
	{
		std::string _filename;
		int _line;
		std::string _name;
		std::string _namespace;
		std::string _kind;
		std::vector<Parent> _parents;
		std::vector<Field> _fields;
	};


	struct EnumConstant
	{
		std::string _name;
		std::string _value;
		bool _implicit;
		unsigned int _bitWidth;
		bool _isSigned;
	};

	struct Enum
	{
		std::string _filename;
		int _line;
		std::string _name;
		std::string _namespace;
		std::string _kind;
		std::vector<EnumConstant> _constants;
	};

	struct Header
	{
		std::vector<Class> _classes;
		std::vector<Enum> _enums;
	};
	
public:
	typedef void(*OnHeaderParsedCb)(const Reflect::Header &header, const boost::filesystem::path &source);
	static void parse(int argc, const char *argv[], OnHeaderParsedCb onHeaderParsedCb);
	static void parseFile(const std::vector<std::string> &args, const boost::filesystem::path &file, OnHeaderParsedCb onHeaderParsedCb);
	static void generateMetadataFile(const std::string &path, const Reflect::Header &outParsedHeader);
	static bool isValidSourceFile(const boost::filesystem::path &path);
};