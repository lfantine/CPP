#include <iostream>
#include "Fixed.hpp"

//*--------------[ Constructor ]-----------------*//

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "\033[2m" << "Default constructor called" << "\033[0m" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "\033[2m" << "Default destructor called" << "\033[0m" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "\033[2m" << "Copy constructor called" << "\033[0m" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "\033[2m" << "Copy assignment operator called" << "\033[0m" << std::endl;
	this->_fixed = rhs.getRawBits();
	return *this;
}

//*--------------[ Getters ]-----------------*//

int	Fixed::getRawBits(void) const
{
	std::cout << "\033[2m" << "GetRawBits member function called" << "\033[0m" << std::endl;
	return (this->_fixed);
}

//*--------------[ Setters ]-----------------*//

void	Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}