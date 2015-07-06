#include "Precompiled.h"

#include <windows.h>
#include <string>
#include <vector>
#include <iostream>

#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>


#include "Reflect/Reflect.h"

int main(int argc, const char** argv)
{
	Reflect::parse(argc, argv, [](const Reflect::Header &header, const boost::filesystem::path &srcPath) {
		std::string fileName = srcPath.filename().string();
		std::string dstPath = srcPath.parent_path().append(fileName + ".reflect.h").string();
		std::cout << "Saving " << dstPath << std::endl;
		Reflect::generateMetadataFile(dstPath, header);
	});

	return 0;
}


