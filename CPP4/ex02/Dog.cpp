#include "Dog.hpp"

//*--------------[ Constructor ]-----------------*//

Dog::Dog() : Animal()
{
	std::cout << "\033[2m" << "Dog constructor called" << "\033[0m" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog & src)
{
	this->brain = new Brain;
	*this=src;
	std::cout << "\033[2m" << "Dog copy constructor called" << "\033[0m" << std::endl;
}

Dog&	Dog::operator=(const Dog & rhs)
{
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++){
		this->brain->setIdea(i, rhs.getBrain().getIdea(i));
	}
	return (*this);
}

Dog::~Dog()
{
	delete(this->brain);
	std::cout << "\033[2m" << "Dog destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//

Brain&	Dog::getBrain() const
{
	return (*this->brain);
}

//*--------------[ Actions ]-----------------*//

void	Dog::makeSound() const
{
	std::cout << "waf" << std::endl;
}
