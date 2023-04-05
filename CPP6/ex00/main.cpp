#include <iostream>
#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage : ./demo <input> <-- [char] / [int] / [double] / [float]" << std::endl;
		return (0);
	}
	Convert*	vert = new Convert();

	vert->convertInput(av[1]);

	delete(vert);
	return 0;
}