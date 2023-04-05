#include <iostream>
#include "Point.hpp"
#include <tgmath.h>

//*--------------[ Constructor ]-----------------*//
Point::Point(void) : _x(0), _y(0)
{
	//std::cout << "\033[2m" << "Default constructor called" << "\033[0m" << std::endl;
}

Point::Point(float x, float y) : _x(x), _y(y)
{
	//std::cout << "\033[2m" << "Others constructor called" << "\033[0m" << std::endl;
}

Point::~Point(void)
{
	//std::cout << "\033[2m" << "Default destructor called" << "\033[0m" << std::endl;
}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY())
{
	//std::cout << "\033[2m" << "Copy constructor called" << "\033[0m" << std::endl;
	*this = src;
}

Point& Point::operator=(Point const & rhs)
{
	//std::cout << "\033[2m" << "Copy assignment operator called" << "\033[0m" << std::endl;
	return *this;
	(void)rhs;
}

//*--------------[ Getters ]-----------------*//

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}