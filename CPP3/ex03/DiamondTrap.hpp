#pragma once

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	WhoIAm();
	private :
		std::string	_Name;
		
};