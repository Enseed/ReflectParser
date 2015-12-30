# Reflect
Generation of C++ classes providing compile-time and runtime introspection

## Objectives

The goal of this project is to provide a solution for generating type metadata in C++ with the following constraints:

### 1. No obfuscation of code

The solution should work on naive unaltered C++ code.  Preprocessor macros are thus excluded from the solution set.

### 2. Support for modern C++ syntax

The solution should support complex C++ syntax and evolve with the language.

### 3. Follow a "Pay for what you use" philosophy

The generated code should only impact the compiled code for the features it provides.  Unused metadata should have no impact on performance, memory or the size of the executable.

### The solution

The solution is to use libclang as a backend to parse header files and generate metadata available at compile time. For instance, running Reflect on the following code:
```c++
#ifndef __SAMPLE_H__
#define __SAMPLE_H__

#include <string>
class Sample
{
public:
  int _value;
  std::string _name;
};
  
#endif // __SAMPLE_H__
```

Generates the following companion class:

```c++
#ifndef __REFLECT_CLASS_SAMPLE_H__
#define __REFLECT_CLASS_SAMPLE_H__

#include <Enseed/Reflect/Class.h>

namespace reflect {

template<> struct Class<Sample, 0> : public ClassBase<Sample>
{
	typedef Sample type;
	static constexpr int parent_count = 0;
	static constexpr int field_count = 2 ;

	struct Fields
	{
		struct _value
		{
			typedef _value field_type;
			typedef int type;
			typedef const int const_type;
			typedef Sample host_type;
			typedef const Sample const_host_type;
			static const char* name() { return "_value"; }
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const int& readRef(const Sample &target) { return target._value; }
			static int* writePtr(Sample *target) { return &target->_value; }
		};
		struct _name
		{
			typedef _name field_type;
			typedef std::string type;
			typedef const std::string const_type;
			typedef Sample host_type;
			typedef const Sample const_host_type;
			static const char* name() { return "_name"; }
			static constexpr reflect::Visibility::Value visibility = reflect::Visibility::PUBLIC;
			static const std::string& readRef(const Sample &target) { return target._name; }
			static std::string* writePtr(Sample *target) { return &target->_name; }
		};
	};

	template<typename CB> static void visitParents(CB &cb = CB())
	{
	}

	template<typename CB> static void visitFields(CB &cb = CB())
	{
		cb(Fields::_value());
		cb(Fields::_name());
	}
};

template<> struct Field<Sample, 0> : public Class<Sample>::Fields::_value{};
template<> struct Field<Sample, 1> : public Class<Sample>::Fields::_name{};

template<> struct SortedField<Sample, 0> : public Class<Sample>::Fields::_name{};
template<> struct SortedField<Sample, 1> : public Class<Sample>::Fields::_value{};

} // namespace reflect

#endif // __REFLECT_CLASS_SAMPLE_H__
```

This companion class can then be used at compile time to visit members:

```c++
	Sample s;
	s._name = "old name";
	s._value = 123;

	Class<Sample>::visitFields([&](auto field) { 
		std::cout << field.name() << " = " << field.readRef(s) << std::endl;
	});

	*Class<Sample>::Fields::_name::writePtr(&s) = "new name";

	Class<Sample>::visitField(s, "_name", [&](auto field) { std::cout << "name: " << field << std::endl; });
```

Which outputs:

```
_value = 123
_name = old name
name: new name
```
