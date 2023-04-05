#include "Data.hpp"

Data::Data(){

}

Data::Data(float value, int format) : _value(value), _format(format){

}

Data::Data(const Data & src){
	*this=src;
}

Data::~Data(){

}

Data&	Data::operator=(const Data & rhs){
	this->_format = rhs._format;
	this->_value = rhs._value;
	return (*this);
}

float Data::getValue() const{
	return this->_value;
}

int Data::getFormat() const{
	return this->_format;
}

std::ostream&	operator<<(std::ostream& os, const Data & rhs)
{
	os << "Data value : " << rhs.getValue() << " Dta format : " << rhs.getFormat();
	return os;
}