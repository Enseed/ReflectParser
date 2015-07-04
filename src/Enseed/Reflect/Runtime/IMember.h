#pragma once

#include "Reflect/Templates/Kind.h"

class IMember
{
public:
	virtual const char *name() const = 0;
	virtual const type_info& type() const = 0;
	virtual const void* readPtr(const void *object) const = 0;
	virtual void* writePtr(void *object) const = 0;
	virtual bool isOptional() const = 0;
	virtual Kind kind() const = 0;
	virtual bool isComplex() const = 0;
	virtual bool isVector() const = 0;
	virtual bool isMap() const = 0;
	virtual bool isRef() const = 0;
	virtual const type_info& keyType() const = 0;
	virtual const type_info& valueType() const = 0;

	virtual ~IMember() {}
};

