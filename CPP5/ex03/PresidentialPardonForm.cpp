#include "PresidentialPardonForm.hpp"

/*                    Constructors                    */

PresidentialPardonForm::PresidentialPardonForm() : Form("DefaultPresidentialPardonForm", 25, 5)
{
	std::cout << "\033[2m" << "PresidentialPardonForm default constructor called" << "\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : Form(name, 25, 5, target)
{
	std::cout << "\033[2m" << "PresidentialPardonForm constructor called" << "\033[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[2m" << "PresidentialPardonForm destructor called" << "\033[0m" << std::endl;
}

/*                    ACTIONS                    */

void	PresidentialPardonForm::makeExecute() const
{
	std::cout << this->_target << " has the pardon of Zaphod Beeblebrox" << std::endl;
}