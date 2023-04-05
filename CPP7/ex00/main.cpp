#include "Fct.hpp"

int	main()
{
	std::cout << "---FLOAT---" << std::endl;
	float	a = 1.10f;
	float	b = 1.20f;
	std::cout << "a = " << a << " et b = " << b << std::endl;
	::swap<float>(a, b);
	std::cout << "a = " << a << " et b = " << b << std::endl;
	std::cout << "min : " << ::min<float>(a, b) << std::endl;
	std::cout << "max : " << ::max<float>(a, b) << std::endl;
	std::cout << "---INT---" << std::endl;
	int	i = 15;
	int	y = 20;
	std::cout << "i = " << i << " et y = " << y << std::endl;
	::swap<int>(i, y);
	std::cout << "i = " << i << " et y = " << y << std::endl;
	std::cout << "min : " << ::min<int>(i, y) << std::endl;
	std::cout << "max : " << ::max<int>(i, y) << std::endl;
	std::cout << "---CHAR---" << std::endl;
	char	c = 'c';
	char	k = 'k';
	std::cout << "c = " << c << " et k = " << k << std::endl;
	::swap<char>(c, k);
	std::cout << "c = " << c << " et k = " << k << std::endl;
	std::cout << "min : " << ::min<char>(c, k) << std::endl;
	std::cout << "max : " << ::max<char>(c, k) << std::endl;
	std::cout << "---STRING---" << std::endl;
	std::string	s = "string1";
	std::string	ss = "string2";
	std::cout << "s = " << s << " et ss = " << ss << std::endl;
	::swap<std::string>(s, ss);
	std::cout << "s = " << s << " et ss = " << ss << std::endl;
	std::cout << "min : " << ::min<std::string>(s, ss) << std::endl;
	std::cout << "max : " << ::max<std::string>(s, ss) << std::endl;
	return 0;
}