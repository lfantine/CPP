#include <iostream>
#include "Fixed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cerr << "Usage : ./demo" << std::endl;
		return (1);
	}
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	(void)argc;
	(void)argv;
}