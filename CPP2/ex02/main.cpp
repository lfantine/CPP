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
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
return 0;
	(void)argc;
	(void)argv;
}