#pragma once

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	void announce(void);
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void	set_name(std::string name);
};