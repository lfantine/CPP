#include <iostream>
#include "Fixed.hpp"
#include <tgmath.h>

//*--------------[ Constructor ]-----------------*//

Fixed::Fixed(void) : _fixed(0)
{
	//std::cout << "\033[2m" << "Default constructor called" << "\033[0m" << std::endl;
}

Fixed::Fixed(int const nb) : _fixed(nb * std::pow(2, this->_nbBits))
{
	//std::cout << "\033[2m" << "Default constructor called" << "\033[0m" << std::endl;
}

Fixed::Fixed(float const nb) : _fixed(nb * std::pow(2, this->_nbBits) + 0.5)
{
	//std::cout << "\033[2m" << "Default constructor called" << "\033[0m" << std::endl;
}

Fixed::~Fixed(void)
{
	//std::cout << "\033[2m" << "Default destructor called" << "\033[0m" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "\033[2m" << "Copy constructor called" << "\033[0m" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "\033[2m" << "Copy assignment operator called" << "\033[0m" << std::endl;
	this->_fixed = rhs.getRawBits();
	return *this;
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator>(Fixed const & rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const & rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed ret(this->toFloat() + rhs.toFloat());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed ret(this->toFloat() - rhs.toFloat());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed ret(this->toFloat() * rhs.toFloat());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed ret(this->toFloat() / rhs.toFloat());
	return (ret);
}

Fixed	Fixed::operator++(int val)
{
	Fixed ret(*this);
	if (!val)
		val = 1;
	this->setRawBits(this->getRawBits() + val);
	return (ret);
}

Fixed	Fixed::operator--(int val)
{
	Fixed ret(*this);
	if (!val)
		val = 1;
	this->setRawBits(this->getRawBits() - val);
	return (ret);
}

Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

std::ostream& operator<<(std::ostream & o, const Fixed & copy)
{
	o << copy.toFloat();
	return o;
}

//*--------------[ Getters ]-----------------*//

int	Fixed::getRawBits(void) const
{
	//std::cout << "\033[2m" << "GetRawBits member function called" << "\033[0m" << std::endl;
	return (this->_fixed);
}

//*--------------[ Setters ]-----------------*//

void	Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

//*--------------[ Actions ]-----------------*//

int	Fixed::toInt(void) const
{
	return (this->_fixed / std::pow(2, this->_nbBits));
}

float	Fixed::toFloat(void) const
{
	return (float) this->_fixed / std::pow(2, this->_nbBits);
}

const Fixed&	Fixed::min(Fixed& fix1, Fixed& fix2)
{
	if (fix1.toFloat() <= fix2.toFloat())
		return fix1;
	else
		return fix2;
}

const Fixed&	Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.toFloat() <= fix2.toFloat())
		return fix1;
	else
		return fix2;
}

const Fixed&	Fixed::max(Fixed& fix1, Fixed& fix2)
{
	if (fix1.toFloat() >= fix2.toFloat())
		return fix1;
	else
		return fix2;
}

const Fixed&	Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.toFloat() >= fix2.toFloat())
		return fix1;
	else
		return fix2;
}