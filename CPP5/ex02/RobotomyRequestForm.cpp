#include "RobotomyRequestForm.hpp"
#include <time.h>

/*                    Constructors                    */

RobotomyRequestForm::RobotomyRequestForm() : Form("DefaultRobotomyRequestForm", 72, 45)
{
	std::cout << "\033[2m" << "RobotomyRequestForm default constructor called" << "\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : Form(name, 72, 45, target)
{
	std::cout << "\033[2m" << "RobotomyRequestForm constructor called" << "\033[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[2m" << "RobotomyRequestForm destructor called" << "\033[0m" << std::endl;
}

/*                    ACTIONS                    */

void	RobotomyRequestForm::makeExecute() const
{
	std::cout << "BZZZZZZZZZZZZZZZZZZZZZZ!" << std::endl;
	std::cout << "BRRRRRRRRRRRRRRRRRRRRRR!" << std::endl;
	std::cout << "BZZZZZZZZZZZZZZZZZZZZZZ!" << std::endl;
	std::cout << "Perceuse! Perceuse!" << std::endl;
	srand(time(NULL));
	int	r = rand() % 100 + 1;
	if (r % 2 == 0)
		std::cout << this->_target << " has been robotomised" << std::endl;
	else
		std::cout << "Operation failed" << std::endl;
}