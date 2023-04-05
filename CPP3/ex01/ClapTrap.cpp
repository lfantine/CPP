#include "ClapTrap.hpp"


//*--------------[ Constructor ]-----------------*//

ClapTrap::ClapTrap(void) : _Name("Default"), _HitPoint(10), _EnergiePoint(10), _AttackDamage(0)
{
	std::cout << "\033[2m" << "ClapTrap constructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoint(10), _EnergiePoint(10), _AttackDamage(0)
{
	std::cout << "\033[2m" << "ClapTrap constructor called" << "\033[0m" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[2m" << "ClapTrap destructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & clap)
{
	std::cout << "\033[2m" << "ClapTrap copy constructor called" << "\033[0m" << std::endl;
	*this=clap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap & rhs)
{
	this->_Name = rhs.getName();
	this->_AttackDamage = rhs.getAttack();
	this->_HitPoint = rhs.getHitpoint();
	this->_EnergiePoint = rhs.getEnergy();
	return (*this);
}

//*--------------[ Getters ]-----------------*//

std::string	ClapTrap::getName(void) const
{
	return (this->_Name);
}

int	ClapTrap::getAttack(void) const
{
	return (this->_AttackDamage);
}

int	ClapTrap::getHitpoint(void) const
{
	return (this->_HitPoint);
}

int	ClapTrap::getEnergy(void) const
{
	return (this->_EnergiePoint);
}

//*--------------[ Setters ]-----------------*//

void	ClapTrap::setHit(int new_hit)
{
	this->_HitPoint = new_hit;
}

void	ClapTrap::setEnergie(int new_point)
{
	this->_EnergiePoint = new_point;
}

//*--------------[ Actions ]-----------------*//

void	ClapTrap::attack(const std::string& target)
{
	if (this->_EnergiePoint > 0 && this->_HitPoint > 0)
	{
		std::cout << "ClapTrap : " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergiePoint--;
	}
	else if (this->_EnergiePoint <= 0 && this->_HitPoint > 0)
		std::cout << "Clap Trap : No more energy" << std::endl;
	else if (this->_EnergiePoint > 0 && this->_HitPoint <= 0)
		std::cout << "Clap Trap : No more hit points" << std::endl;
	else
		std::cout << "Clap Trap : No more of everything" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergiePoint > 0 && this->_HitPoint > 0)
	{
		this->_HitPoint += amount;
		this->_EnergiePoint--;
		std::cout << "ClapTrap : " << this->_Name << " repaired " << amount << " hit points" << std::endl;
	}
	else if (this->_EnergiePoint <= 0 && this->_HitPoint > 0)
		std::cout << "Clap Trap : No more energy" << std::endl;
	else if (this->_EnergiePoint > 0 && this->_HitPoint <= 0)
		std::cout << "Clap Trap : No more hit points" << std::endl;
	else
		std::cout << "Clap Trap : No more of everything" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap : " << this->_Name << " take " << amount << " damages" << std::endl;
	this->_HitPoint -= amount;
}
