#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	*crat1;
	Form		*form1;
	Form		*form2;

	crat1 = new Bureaucrat("Robert", 90);
	form1 = new Form("Parameter", 100, 50);
	std::cout << *form1 << std::endl;
	form2 = new Form("Tester", 150, 1);
	std::cout << *form2 << std::endl;

	delete(form1);
	delete(form2);

	try
	{
		form1 = new Form("kill", 151);
		delete(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form1 = new Form("kill", 149, 0);
		delete(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	form1 = new Form("copy1", 67, 11);
	form2 = new Form(*form1);
	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;

	delete(form1);
	delete(form2);

	form1 = new Form("TEST", 45, 90);
	crat1->signForm(*form1);
	crat1->signForm(*form1);

	delete(form1);
	delete(crat1);

	//system("leaks demo");
	return 0;
}