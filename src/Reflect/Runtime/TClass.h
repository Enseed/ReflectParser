#pragma once

template<class T>
class TClass : public IClass
{
public:
	virtual const char* name() const override { return Class<T>::name(); }
	virtual const type_info& type() const override { return Class<T>::type(); }
	virtual int memberCount() const override { return Class<T>::member_count; }
	virtual const IMember* members() const override { return Class<T>::members(); }
};

