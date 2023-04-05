#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat	*crat1 = new Bureaucrat("Fabrice", 40);
	ShrubberyCreationForm	*form1 = new ShrubberyCreationForm("shrub", "tree2");
	RobotomyRequestForm	*robo = new RobotomyRequestForm("RobotCreator", "Bechir");
	PresidentialPardonForm *pres = new PresidentialPardonForm("Pardon", "Tom");
	
	try
	{
		crat1->signForm(*form1);
		crat1->executeForm(*form1);
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
	delete(form1);
	delete(robo);
	delete(pres);
	//system("leaks demo");
	//return 0;
}