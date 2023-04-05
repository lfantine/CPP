#include "WrongDog.hpp"

//*--------------[ Constructor ]-----------------*//

WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << "\033[2m" << "WrongDog constructor called" << "\033[0m" << std::endl;
	this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog & src)
{
	*this=src;
	std::cout << "\033[2m" << "WrongDog copy constructor called" << "\033[0m" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "\033[2m" << "WrongDog destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Actions ]-----------------*//

void	WrongDog::makeSound() const
{
	std::cout << "OU ARF" << std::endl;
}