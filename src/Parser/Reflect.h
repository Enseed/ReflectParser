#pragma once

#include <string>

class ParsedHeader;

class Reflect
{
public:
	static void parseHeaderFile(const std::string &path, ParsedHeader *outParsedHeader);
	static void generateMetadataFile(const std::string &path, const ParsedHeader &outParsedHeader);
};