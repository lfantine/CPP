#include "Animal.hpp"

//*--------------[ Constructor ]-----------------*//

Animal::Animal() : _type("none")
{
	std::cout << "\033[2m" << "Animal constructor called" << "\033[0m" << std::endl;
}

Animal::Animal(const Animal & src)
{
	*this=src;
	std::cout << "\033[2m" << "Animal copy constructor called" << "\033[0m" << std::endl;
}

Animal&	Animal::operator=(const Animal & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\033[2m" << "Animal destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//

std::string	Animal::getType() const
{
	return (this->_type);
}

//*--------------[ Actions ]-----------------*//

void	Animal::makeSound() const
{

}