#include "Dog.hpp"

//*--------------[ Constructor ]-----------------*//

Dog::Dog() : Animal()
{
	std::cout << "\033[2m" << "Dog constructor called" << "\033[0m" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog & src)
{
	*this=src;
	std::cout << "\033[2m" << "Dog copy constructor called" << "\033[0m" << std::endl;
}

Dog&	Dog::operator=(const Dog & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[2m" << "Dog destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Actions ]-----------------*//

void	Dog::makeSound() const
{
	std::cout << "waf" << std::endl;
}