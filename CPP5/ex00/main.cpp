#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	*boss;
	Bureaucrat	*kill;
	Bureaucrat	*kill2;
	Bureaucrat	*test1;
	Bureaucrat	*test2;
	Bureaucrat	*copy1;
	Bureaucrat	*copy2;
	try
	{
		boss = new Bureaucrat;
		std::cout << *boss << std::endl;
		delete(boss);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		kill = new Bureaucrat("KILL", 0);
		std::cout << kill->getName() << std::endl;
		delete(kill);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		kill2 = new Bureaucrat("KILL2", 151);
		std::cout << kill2->getName() << std::endl;
		delete(kill2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	test1 = new Bureaucrat("test1", 150);
	std::cout << test1->getName() << std::endl;
	try
	{
		test1->downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete(test1);

	test2 = new Bureaucrat("test2", 1);
	std::cout << test2->getName() << std::endl;
	try
	{
		test2->upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete(test2);

	copy1 = new Bureaucrat("copy1", 1);
	std::cout << *copy1 << std::endl;
	copy2 = new	Bureaucrat(*copy1);
	std::cout << *copy2 << std::endl;
	delete(copy1);
	delete(copy2);
	return 0;
}