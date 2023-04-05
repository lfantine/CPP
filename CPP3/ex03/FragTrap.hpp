#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap&	operator=(const FragTrap & rhs);
		~FragTrap();

		void highFivesGuys(void);
		void	attack(const std::string& target);
	private :
};