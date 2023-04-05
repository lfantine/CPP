#include "Brain.hpp"

//*--------------[ Constructor ]-----------------*//

Brain::Brain()
{
	for (int i = 0; i < 100; i++){
		this->idea[i] = "empty";
 	}
	std::cout << "\033[2m" << "Brain constructor called" << "\033[0m" << std::endl;
}

Brain::Brain(const Brain & src)
{
	for (int i = 0; i < 100; i++){
		this->idea[i] = "empty";
 	}
	*this=src;
	std::cout << "\033[2m" << "Brain copy constructor called" << "\033[0m" << std::endl;
}

Brain&	Brain::operator=(const Brain & rhs)
{
	for (int i = 0; i < 100; i++){
		this->idea[i] = rhs.getIdea(i);
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "\033[2m" << "Brain destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//

std::string	Brain::getIdea(int	i) const
{
	return (this->idea[i]);
}

//*--------------[ Getters ]-----------------*//

void	Brain::setIdea(int i, std::string id)
{
	if (i > 99)
		i = 99;
	this->idea[i] = id;
}