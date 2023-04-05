#include "Cat.hpp"

//*--------------[ Constructor ]-----------------*//

Cat::Cat() : Animal()
{
	std::cout << "\033[2m" << "Cat constructor called" << "\033[0m" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat & src)
{
	*this=src;
	std::cout << "\033[2m" << "Cat copy constructor called" << "\033[0m" << std::endl;
}

Cat&	Cat::operator=(const Cat & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[2m" << "Cat destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Actions ]-----------------*//

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}