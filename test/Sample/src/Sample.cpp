#include "Sample.h"
#include "generated/Class_Sample.h"
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>

using namespace reflect;

int main(int argc, const char *argv[])
{
	Sample s;
	s._name = "old name";
	s._value = 123;

	Class<Sample>::visitFields([&](auto field) { 
		std::cout << field.name() << " = " << field.readRef(s) << std::endl;
	});

	*Class<Sample>::Fields::_name::writePtr(&s) = "new name";

	Class<Sample>::visitField(s, "_name", [&](auto field) { std::cout << "name: " << field << std::endl; });
}