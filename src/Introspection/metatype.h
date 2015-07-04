#pragma once
#include <vector>
#include <string>
#include <map>
#include "Generic/Text/StringManip.h"
#include "boost/regex.hpp"

static bool IsSimpleType(const std::string &name)
{
	return (1
		|| name == "char"
		|| name == "bool"
		|| name == "short"
		|| name == "int"
		|| name == "long"
		|| name == "long long"
		|| name == "float"
		|| name == "double"
		|| name == "float"
		|| name == "std::string"
		|| name == "boost::posix_time::ptime"
		|| name == "boost::uuids::uuid"
		);
}


class MetaParent
{
public:
	MetaParent(const std::string &iName, bool iIsPublic, bool iIsVirtual)
		: name(iName)
		, isPublic(iIsPublic)
		, isVirtual(iIsVirtual)
	{}

	std::string name;
	bool isPublic;
	bool isVirtual;
};

class MetaAnnotation
{
public:
	std::string name;
	std::map<std::string, std::string> attributes;
};

class MetaMember
{
public:
	MetaMember(const std::string &iType, const std::string &iName)
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

		isComplex = !IsSimpleType(valueType);
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

class MetaType
{
public:
	std::vector<MetaParent> parents;
	std::vector<std::string> dependencies;
	std::vector<MetaAnnotation> annotations;
	std::string definition;
	std::string name;
	std::vector<MetaMember> members;
};
