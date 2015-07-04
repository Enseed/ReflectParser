#pragma once

#include "IMember.h"

class IClass
{
public:
	virtual const char* name() const = 0;
	virtual const type_info& type() const = 0;
	virtual const IMember* member(int index) const = 0;
	virtual size_t memberCount() const = 0;
	virtual ~IClass() {}
};
