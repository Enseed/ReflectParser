#pragma once

template<class T, int START_AT=T::member_count>
class MemberCollection: public MemberCollection<T, START_AT-1>
{
public:
	TMember<typename Member<T,START_AT>::introspection_type> _member;
};

template<class T>
class MemberCollection<T,0>
{
public:
	TMember<typename Member<T,0>::introspection_type> _member;
};

