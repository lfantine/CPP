#include "DiamondTrap.hpp"
#include <iostream>

//*--------------[ Constructor ]-----------------*//

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_Name = name;
	this->_HitPoint = 100;
	this->_EnergiePoint = 50;
	this->_AttackDamage = 20;
	std::cout << "\033[2m" << "DiamondTrap constructor called" << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	this->_Name = "Default";
	this->_HitPoint = 100;
	this->_EnergiePoint = 50;
	this->_AttackDamage = 20;
	std::cout << "\033[2m" << "DiamondTrap constructor called" << "\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[2m" << "DiamondTrap destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Actions ]-----------------*//

void	DiamondTrap::attack(const std::string& target)
{
	if (this->_EnergiePoint > 0 && this->_HitPoint > 0)
		std::cout << "DiamondTrap : " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
	else if (this->_EnergiePoint <= 0 && this->_HitPoint > 0)
		std::cout << "DiamondTrap : No more energy" << std::endl;
	else if (this->_EnergiePoint > 0 && this->_HitPoint <= 0)
		std::cout << "DiamondTrap : No more hit points" << std::endl;
	else
		std::cout << "DiamondTrap : No more of everything" << std::endl;
}

void	DiamondTrap::WhoIAm()
{
	std::cout << "DiamondTrap name : " + this->_Name + " and ClapTrap name : " + this->getName() + "_clap_trap"<< std::endl;
}