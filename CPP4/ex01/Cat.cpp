#include "Cat.hpp"

//*--------------[ Constructor ]-----------------*//

Cat::Cat() : Animal()
{
	std::cout << "\033[2m" << "Cat constructor called" << "\033[0m" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat & src)
{
	this->brain = new Brain;
	*this=src;
	std::cout << "\033[2m" << "Cat copy constructor called" << "\033[0m" << std::endl;
}

Cat&	Cat::operator=(const Cat & rhs)
{
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++){
		this->brain->setIdea(i, rhs.getBrain().getIdea(i));
	}
	return (*this);
}

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "\033[2m" << "Cat destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//

Brain&	Cat::getBrain() const
{
	return (*this->brain);
}

//*--------------[ Actions ]-----------------*//

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}