#include <iostream>
#include "HumanA.hpp"

//*--------------[ Constructor ]-----------------*//

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
}

// HumanA::HumanA(std::string name) : name(name)
// {
// 	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
// }

// HumanA::HumanA()
// {
// 	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
// }

HumanA::~HumanA()
{
	std::cout << "\033[2m" << "Destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//


//*--------------[ Setters ]-----------------*//

void	HumanA::set_weapon(const Weapon &new_weapon)
{
	this->_weapon = new_weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << "  attacks with their " << this->_weapon.get_type() << std::endl;
}
