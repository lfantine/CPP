#include "ScavTrap.hpp"
#include <iostream>

//*--------------[ Constructor ]-----------------*//

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_Name = name;
	this->_HitPoint = 100;
	this->_EnergiePoint = 50;
	this->_AttackDamage = 20;
	std::cout << "\033[2m" << "ScavTrap constructor called" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_Name = "Default";
	this->_HitPoint = 100;
	this->_EnergiePoint = 50;
	this->_AttackDamage = 20;
	std::cout << "\033[2m" << "ScavTrap constructor called" << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[2m" << "ScavTrap destructor called" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & clap)
{
	*this=clap;
	std::cout << "\033[2m" << "ScavTrap copy constructor called" << "\033[0m" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap & rhs)
{
	this->_Name = rhs.getName();
	this->_AttackDamage = rhs.getAttack();
	this->_HitPoint = rhs.getHitpoint();
	this->_EnergiePoint = rhs.getEnergy();
	return (*this);
}

//*--------------[ Actions ]-----------------*//

void	ScavTrap::attack(const std::string& target)
{
	if (this->_EnergiePoint > 0 && this->_HitPoint > 0)
	{
		std::cout << "ScavTrap : " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergiePoint--;
	}
	else if (this->_EnergiePoint <= 0 && this->_HitPoint > 0)
		std::cout << "ScavTrap : No more energy" << std::endl;
	else if (this->_EnergiePoint > 0 && this->_HitPoint <= 0)
		std::cout << "ScavTrap : No more hit points" << std::endl;
	else
		std::cout << "ScavTrap : No more of everything" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_Name << " entre en mode Gate keeper" << std::endl;
}