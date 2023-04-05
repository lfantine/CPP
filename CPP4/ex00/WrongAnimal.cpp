#include "WrongAnimal.hpp"

//*--------------[ Constructor ]-----------------*//

WrongAnimal::WrongAnimal() : _type("none")
{
	std::cout << "\033[2m" << "WrongAnimal constructor called" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	*this=src;
	std::cout << "\033[2m" << "WrongAnimal copy constructor called" << "\033[0m" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[2m" << "WrongAnimal destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

//*--------------[ Actions ]-----------------*//

void	WrongAnimal::makeSound() const
{

}