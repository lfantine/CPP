#include <iostream>
#include "Harl.hpp"

//*--------------[ Constructor ]-----------------*//

Harl::Harl(void)
{
	std::cout << "\033[2m" << "Constructor called" << "\033[0m" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "\033[2m" << "Destructor called" << "\033[0m" << std::endl;
}

//*--------------[ Getters ]-----------------*//


//*--------------[ Setters ]-----------------*//


//*--------------[ Actions ]-----------------*//

void	Harl::debug(void)
{
	std::cout << "*---[ DEBUG ]---*" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "*---[ INFO ]---*" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "*---[ WARNING ]---*" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "*---[ ERROR ]---*" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string lvl)
{
	void	(Harl::*level[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};
	std::string	(livil[4]) = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (lvl == livil[i])
			(this->*level[i])();
	}
}
