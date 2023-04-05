#include <iostream>
#include "Harl.hpp"
#define NOT -5


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage : ./launch [a level]" << std::endl;
		return (1);
	}
	Harl	h;
	int		level = NOT;
	std::string str(argv[1]);
	std::string	(livil[4]) = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		str == livil[i] ? level = i : argc++;
		if (level != NOT && level <= i)
		{
			h.complain(livil[i]);
			std::cout << std::endl;
		}
	}
	if (level == NOT)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	(void)argc;
	(void)argv;
}