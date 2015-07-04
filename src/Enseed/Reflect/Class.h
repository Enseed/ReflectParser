#pragma once

namespace reflect {

template<class T, int IS_CONST = std::is_const<T>::value>
class Class
{};

template<class T>
class Class<T, 1> : public Class < T, std::remove_const<T>::type >
{};

template<class T>
class Class<T, 0>
{
	typedef T type;
};

template<class T, int INDEX>
class Field
{};

template<class T, int INDEX>
class SortedField
{};

struct Visibility
{
	typedef enum {
		PRIVATE = 1,
		PROTECTED = 2,
		PUBLIC = 4,
	} Value;

	Value value;
};

struct VisibilityMask
{
	typedef enum {
		PRIVATE = Visibility::PRIVATE,
		PROTECTED = Visibility::PROTECTED,
		PUBLIC = Visibility::PUBLIC,
		STANDARD_BIT = 8,
		ALL = PRIVATE | PUBLIC | PROTECTED,
		STANDARD = ALL | STANDARD_BIT,
	} Value;

	Value value;
};

template<int SHOULD_CALL, typename CB, class ... Args> struct Filter {};

template<typename CB, class ... Args> struct Filter<false, CB, Args...>
{
	void filter(CB &cb) {}
};

template<typename CB, class ... Args> struct Filter<true, CB, Args...>
{
	void filter(CB &cb, Args... args)
	{
		cb(args);
	}
};


template<int BEGIN, int END, int ITER=(BEGIN+END)/2>
struct FindFieldByName
{
	template<class T, typename CB>
	static bool find(const char *name, CB &cb)
	{
		int test = strcmp(name, SortedField<T, ITER>::name());
		if (test == 0)
		{
			cb(SortedField<T, ITER>::field_type());
			return true;
		}
		else if (test > 0)
		{
			return FindFieldByName<ITER+1, END>::find<T, CB>(name, cb);
		}
		else
		{
			return FindFieldByName<BEGIN, ITER>::find<T, CB>(name, cb);
		}
	}
};

template<int BEGIN>
struct FindFieldByName<BEGIN, BEGIN, BEGIN>
{
	template<class T, typename CB>
	static bool find(const char *name, CB &cb)
	{
		return false;
	}
};

template<class T>
class ClassBase
{
public:
	template<typename CB> static void visitParents()
	{	Class<T>::visitParents([&](auto parent) { CB::operator()(); }); 	}

	template<typename CB> static void visitParents(const T &target, CB &cb = CB())
	{	Class<T>::visitParents([&](auto parent) { cb(static_cast<const parent::type&>(target)); }); }

	template<typename CB> static void visitParents(T *target, CB &cb = CB())
	{	Class<T>::visitParents([&](auto parent) { cb(static_cast<parent::type*>(target)); }); }

	template<int VISIBILITY_MASK, typename CB> static void visitVisibleFields(CB &cb = CB())
	{	Class<T>::visitFields([&](auto field) { VisibilityFilter<(VISIBILITY_MASK & decltype(field)::visibility) != 0>::filter(cb, field);	}); }

	template<typename CB> static void visitPublicFields(CB &cb = CB())
	{	Class<T>::visitFields([&](auto field) { VisibilityFilter<(VisibilityMask::PUBLIC & decltype(field)::visibility) != 0>::filter(cb, field); }); }

	template<typename CB> static void visitPrivateFields(CB &cb = CB())
	{	Class<T>::visitFields([&](auto field) { VisibilityFilter<(VisibilityMask::PRIVATE & decltype(field)::visibility) != 0>::filter(cb, field); }); }

	template<typename CB> static void visitProtectedFields(CB &cb = CB())
	{ Class<T>::visitFields([&](auto field) { VisibilityFilter<(VisibilityMask::PROTECTED & decltype(field)::visibility) != 0>::filter(cb, field); }); }

	template<typename CB> static bool visitField(const char *name, CB &cb = CB())
	{	
		return FindFieldByName<0, Class<T>::field_count>::find<T, CB>(name, cb);
	}

	template<typename CB> static bool visitField(T *target, const char *name, CB &cb = CB())
	{
		return FindFieldByName<0, Class<T>::field_count>::find<T>(name, [&target, &cb] (auto field) { cb(decltype(field)::writePtr(target)); });
	}

	template<typename CB> static bool visitField(const T &target, const char *name, CB &cb = CB())
	{
		return FindFieldByName<0, Class<T>::field_count>::find<T>(name, [&target, &cb](auto field) { cb(decltype(field)::readRef(target)); });
	}
};

} // namespace reflect