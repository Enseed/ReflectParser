#pragma once

template<class T>
class TMember : public IMember
{
public:
	virtual const char *name() const override { return T::name(); }
	virtual const type_info& type() const override { return typeid(T::type); }
	virtual const void* readPtr(const void *object) const override { return T::readPtr(static_cast<T::const_class_type*>(object)); }
	virtual void* writePtr(void *object) const override { return T::writePtr(static_cast<T::class_type*>(object)); }
	virtual Kind kind() const override { return Kind::fromInt(T::kind);  }
	virtual bool isOptional() const override { return T::is_optional; }
	virtual bool isComplex() const override { return T::kind == Kind::COMPLEX; }
	virtual bool isVector() const override { return T::kind == Kind::LIST; }
	virtual bool isMap() const override { return T::kind == Kind::MAP; }
	virtual bool isRef() const override { return T::is_ref; }
	virtual const type_info& keyType() const override { return typeid(T::key_type); }
	virtual const type_info& valueType() const override { return typeid(T::value_type); }
};
