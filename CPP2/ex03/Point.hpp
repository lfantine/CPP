#pragma once

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public :
		Point(void);
		Point(float x, float y);
		Point(Point const & src);
		Point& operator=(Point const & rhs);
		~Point();

		/*Getter*/
		Fixed getX(void) const;
		Fixed getY(void) const;
	private :
		const Fixed _x;
		const Fixed _y;
};