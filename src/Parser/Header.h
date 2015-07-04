#pragma once
#include <vector>
#include <string>
#include <map>
#include <Enseed/Generic/Strings/Strings.h>
#include "boost/regex.hpp"

#include <set>

class ParsedHeader
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

public:
	std::vector<Class> _classes;
	std::vector<Enum> _enums;
};


class CPPElement
{
public:
	virtual ~CPPElement(){}
};

class Header : public CPPElement
{
public:
	class Types
	{
	public:
		class Simple
		{
		public:
			static std::set<std::string> sTypes;

			Simple()
			{
				addType("char");
				addType("bool");
				addType("short");
				addType("int");
				addType("long");
				addType("long long");
				addType("float");
				addType("double");
				addType("std::string");
				addType("boost::posix_time::ptime");
				addType("boost::uuids::uuid");
			}

			static void addType(const std::string &type)
			{
				sTypes.insert(type);
			}

			static bool contains(const std::string &type)
			{
				return sTypes.find(type) != sTypes.end();
			}
		};

		static void addSimpleType(const std::string &type)
		{
			Simple::addType(type);
		}

		static bool isSimple(const std::string &type)
		{
			return Simple::contains(type);
		}
	};

	class Parent
	{
	public:
		Parent(const std::string &iName, bool iIsPublic, bool iIsVirtual)
			: name(iName)
			, isPublic(iIsPublic)
			, isVirtual(iIsVirtual)
		{}

		std::string name;
		bool isPublic;
		bool isVirtual;
	};



	class Member
	{
	public:
		Member(const std::string &iType, const std::string &iName)
			: rawType(iType)
			, name(iName)
		{
			valueType = rawType;
			keyType = "void";
			isVector = false;
			isMap = false;
			isComplex = false;
			isRef = false;
			isOptional = false;

			{
				const std::string &regexStr = "^boost::optional<(.*)>$";
				boost::regex expr(regexStr);
				boost::smatch what;
				if (boost::regex_search(valueType, what, expr))
				{
					isOptional = true;
					valueType = what[1];
				}
			}

		{
			const std::string &regexStr = "^std::vector<(.*)>$";
			boost::regex expr(regexStr);
			boost::smatch what;
			if (boost::regex_search(valueType, what, expr))
			{
				isVector = true;
				valueType = what[1];
				keyType = "size_t";
				isComplex = true;
			}
		}

		{
			const std::string &regexStr = "^std::map<(.*),(.*)>$";
			boost::regex expr(regexStr);
			boost::smatch what;
			if (boost::regex_search(valueType, what, expr))
			{
				isMap = true;
				keyType = what[1];
				valueType = what[2];
				isComplex = true;
			}
		}

		{
			const std::string &regexStr = "^seed::CountPtr<(.*)>$";
			boost::regex expr(regexStr);
			boost::smatch what;
			if (boost::regex_search(valueType, what, expr))
			{
				isRef = true;
				valueType = what[1];
			}
		}

		isComplex = !Types::isSimple(valueType);
		}

		std::string name;
		std::string rawType;
		bool isOptional;
		bool isVector;
		bool isMap;
		bool isComplex;
		bool isRef;
		std::string keyType;
		std::string valueType;
	};

public:
	class Struct
	{

	};

public:
	Struct& beginStruct()
	{

	}
	std::vector<Parent> parents;
	std::vector<std::string> dependencies;
	std::string definition;
	std::string name;
	std::vector<Member> members;
};

