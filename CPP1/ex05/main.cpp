#include <iostream>
#include "Harl.hpp"


int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cerr << "Usage : ./launch" << std::endl;
		return (1);
	}
	Harl	h;
	h.complain("debug");
	std::cout << std::endl;
	h.complain("info");
	std::cout << std::endl;
	h.complain("warning");
	std::cout << std::endl;
	h.complain("error");
	std::cout << std::endl;
	h.complain("nothing");
	std::cout << std::endl;
	h.complain("hooo yeaaah");
	(void)argc;
	(void)argv;
}