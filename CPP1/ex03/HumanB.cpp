#include <iostream>
#include "HumanB.hpp"

//*--------------[ Constructor ]-----------------*//

// HumanB::HumanB()
// {
// 	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
// }

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "\033[2m" << "Destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//


//*--------------[ Setters ]-----------------*//

void	HumanB::set_weapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << this->_name << "  attacks with nothing " << std::endl;
	else
		std::cout << this->_name << "  attacks with their " << this->_weapon->get_type() << std::endl;
}
