#pragma once

class Kind
{
public:
	static Kind fromInt(int value)
	{
		Kind k;
		k.value = (Value)value;
		return k;
	}

	enum Value {
		SIMPLE,
		COMPLEX,
		LIST,
		MAP
	};

	Value value;
};
