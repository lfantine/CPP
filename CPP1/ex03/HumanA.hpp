#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		// HumanA(std::string name);
		// HumanA();
		~HumanA();
		void	set_weapon(const Weapon &new_weapon);
		void	attack(void);

	private :
		std::string	_name;
		Weapon		&_weapon;
};