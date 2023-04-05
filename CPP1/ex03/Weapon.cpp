#include <iostream>
#include "Weapon.hpp"

//*--------------[ Constructor ]-----------------*//

Weapon::Weapon() : _type("hands")
{
	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "\033[2m" << "Destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//

std::string&	Weapon::get_type(void) {
	return (this->_type);
}

//*--------------[ Setters ]-----------------*//

void	Weapon::set_type(std::string new_type)
{
	this->_type = new_type;
}
