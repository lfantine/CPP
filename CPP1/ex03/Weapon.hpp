#pragma once

#include <iostream>

class Weapon
{
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string&	get_type(void);
		void	set_type(std::string new_type);

	private :
		std::string	_type;
};