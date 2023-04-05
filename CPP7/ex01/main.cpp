#include "Header.hpp"

template < typename T>
void	iter(T const * adr, size_t size, void f(T const &)){
	for (size_t i = 0; i < size; i++){
		f(adr[i]);
	}
}

template< typename T>
void	isValue(T& t){
	std::cout << "value is " << t <<std::endl;
}

int	main()
{
	std::string tab[] = {"s1", "s2", "s3", "s4", "s5"};
	float	ftab[] = {1.1f, 1.2f, 1.3f, 1.4f, 1.5f};
	int		itab[] = {1, 2, 3, 4, 5};
	std::cout << "TEST : tableau de string" << std::endl;
	iter<std::string>(tab, 5, &isValue);
	std::cout << "TEST : tableau de float" << std::endl;
	iter<float>(ftab, 5, &isValue);
	std::cout << "TEST : tableau de int" << std::endl;
	iter<int>(itab, 5, &isValue);
	return 0;
}