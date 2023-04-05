#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(ScavTrap const & clap);
		ScavTrap&	operator=(const ScavTrap & rhs);
		ScavTrap(std::string name);
		~ScavTrap();

		void	guardGate(void);
		void	attack(const std::string& target);
	private :
};