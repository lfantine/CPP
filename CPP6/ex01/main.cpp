#include <iostream>
#include "Convert.hpp"
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(int ac, char **av)
{
	// if (ac != 2)
	// {
	// 	std::cout << "Usage : ./demo <input> <-- [char] / [int] / [double] / [float]" << std::endl;
	// 	return (0);
	// }

	Data*	dta = new Data(10, 1);
	uintptr_t	p;
	std::cout << *dta << std::endl;
	p = serialize(dta);
	Data*	d = deserialize(p);
	std::cout << *d << std::endl;

	delete(dta);
	return 0;
	(void)av;
	(void)ac;
}