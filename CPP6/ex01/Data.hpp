#pragma once

#include <iostream>

class Data
{
public:
	Data();
	Data(float value, int format);
	Data(const Data & src);
	~Data();

	Data&	operator=(const Data & rhs);

	float	getValue() const;
	int		getFormat() const;
private:
	float	_value;
	int		_format;
};

std::ostream&	operator<<(std::ostream& os, const Data & rhs);