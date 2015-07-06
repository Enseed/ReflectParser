#include "Precompiled.h"

#include <windows.h>
#include <string>
#include <vector>
#include <iostream>

#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>

#include "Reflect/Reflect.h"

int main(int argc, char** argv)
{
	return WinMain(nullptr, nullptr, nullptr, 0);
}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
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

				Reflect::Header parsedHeader;
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
