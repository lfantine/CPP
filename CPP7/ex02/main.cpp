#include "Header.hpp"
#include "Array.Class.hpp"

int	main()
{
	Array<int> *a = new Array<int>();
	Array<int> b(2);
	Array<int> c(b);
	Array<int> d(4);
	d = b;
	std::cout << b << std::endl;
	try
	{
		b[0] = 1;
		b[1] = 2;
		std::cout << b[0] << std::endl;
		std::cout << b[1] << std::endl;
		std::cout << c[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete (a);
	system("leaks demo");
	return 0;
}