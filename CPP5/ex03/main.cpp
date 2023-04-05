#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	*crat1 = new Bureaucrat("Fabrice", 40);
	Intern	*intern = new Intern();
	Form	*shrub = intern->makeForm("ShrubberyCreationForm", "tree");
	Form	*robo = intern->makeForm("RobotomyRequestForm", "Bechir");
	Form	*pres = intern->makeForm("PresidentialPardonForm", "Tom");
	Form	*kill;

	try
	{
		kill = intern->makeForm("NONE", "noTarget");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "----------------------------" << std::endl;
	
	try
	{
		crat1->signForm(*shrub);
		crat1->executeForm(*shrub);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------" << std::endl;
	try
	{
		crat1->signForm(*robo);
		crat1->executeForm(*robo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------------" << std::endl;
	try
	{
		crat1->signForm(*pres);
		crat1->executeForm(*pres);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete(crat1);
	delete(shrub);
	shrub = intern->makeForm("ShrubberyCreationForm", "tree");
	std::cout << *shrub << std::endl;
	delete(shrub);
	delete(robo);
	delete(pres);
	//system("leaks demo");
	//return 0;
}