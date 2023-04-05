#include "FragTrap.hpp"
#include <iostream>

//*--------------[ Constructor ]-----------------*//

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Name = name;
	this->_HitPoint = 100;
	this->_EnergiePoint = 100;
	this->_AttackDamage = 30;
	std::cout << "\033[2m" << "FragTrap constructor called" << "\033[0m" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	this->_Name = "Default";
	this->_HitPoint = 100;
	this->_EnergiePoint = 100;
	this->_AttackDamage = 30;
	std::cout << "\033[2m" << "FragTrap constructor called" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this=src;
	std::cout << "\033[2m" << "FragTrap copy constructor called" << "\033[0m" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap & rhs)
{
	this->_Name = rhs.getName();
	this->_AttackDamage = rhs.getAttack();
	this->_HitPoint = rhs.getHitpoint();
	this->_EnergiePoint = rhs.getEnergy();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "\033[2m" << "FragTrap destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Actions ]-----------------*//

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: High Five ????????????"<< std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_EnergiePoint > 0 && this->_HitPoint > 0)
		std::cout << "FragTrap : " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
	else if (this->_EnergiePoint <= 0 && this->_HitPoint > 0)
		std::cout << "FragTrap : No more energy" << std::endl;
	else if (this->_EnergiePoint > 0 && this->_HitPoint <= 0)
		std::cout << "FragTrap : No more hit points" << std::endl;
	else
		std::cout << "FragTrap : No more of everything" << std::endl;
}