#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "\033[2m" << "Zombie constructor called" << "\033[0m" << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "\033[2m" << "Zombie constructor called" << "\033[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\033[2m" << "Zombie destructor called" << "\033[0m" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << "\033[31m" << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}