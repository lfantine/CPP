#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :
		//HumanB();
		HumanB(std::string name);
		~HumanB();
		void	set_weapon(Weapon &new_weapon);
		void	attack(void);

	private :
		std::string	_name;
		Weapon		*_weapon;
};