#include "WrongCat.hpp"

//*--------------[ Constructor ]-----------------*//

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "\033[2m" << "WrongCat constructor called" << "\033[0m" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & src)
{
	*this=src;
	std::cout << "\033[2m" << "WrongCat copy constructor called" << "\033[0m" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[2m" << "WrongCat destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Actions ]-----------------*//

void	WrongCat::makeSound() const
{
	std::cout << "MAIS HOW" << std::endl;
}