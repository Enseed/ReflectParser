#ifndef __RECLECT_CLASS_SAMPLE_H__
#define __RECLECT_CLASS_SAMPLE_H__

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

#endif // __RECLECT_CLASS_SAMPLE_H__
