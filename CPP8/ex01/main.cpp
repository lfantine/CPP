#include <iostream>
#include <list>
#include <vector>
#include "Span.Class.hpp"

int	main(){
	std::cout.precision(3);
	std::cout << "-------<TEST EN INT>--------" << std::endl;
	Span<int>	sp(3);
	sp.addMassive(41, 34, 4);
	try{	sp.addNumber(1);}
	catch(const std::exception& e){	std::cerr << e.what() << '\n';}

	std::cout << sp;

	try{ std::cout << "shortest span = "<< sp.shortestSpan() << std::endl; }
	catch(const std::exception& e){	std::cerr << e.what() << '\n';}

	try{ std::cout << "longest span = " << sp.longestSpan() << std::endl; }
	catch(const std::exception& e){	std::cerr << e.what() << '\n';}

	std::cout << "-------<TEST EN FLOAT>--------" << std::endl;
	Span<float>	spf(3);
	spf.addMassive(1.41f, 1.34f, 1.04f);
	try{	spf.addNumber(1.0f);}
	catch(const std::exception& e){	std::cerr << e.what() << '\n';}

	std::cout << spf;

	try{ std::cout << "shortest span = "<< spf.shortestSpan() << std::endl; }
	catch(const std::exception& e){	std::cerr << e.what() << '\n';}

	try{ std::cout << "longest span = " << spf.longestSpan() << std::endl; }
	catch(const std::exception& e){	std::cerr << e.what() << '\n';}

	std::cout << "-------<TEST COPY>--------" << std::endl;

	Span<int>	spcopy(sp);
	std::cout << spcopy;
	return 0;
}