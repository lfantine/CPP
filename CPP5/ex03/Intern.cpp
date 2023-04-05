#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

/*                    Constructors                    */

Intern::Intern(void) : _nb_shrub(1), _nb_pres(1), _nb_robo(1)
{

}

Intern::Intern(const Intern & src)
{
	*this=src;
}

Intern::~Intern()
{

}

Intern&	Intern::operator=(const Intern & rhs)
{
	this->_nb_pres = rhs._nb_pres;
	this->_nb_robo = rhs._nb_robo;
	this->_nb_shrub = rhs._nb_shrub;
	return (*this);
}

/*                    Actions                    */

Form*	Intern::makeForm(std::string form_name, std::string form_target)
{
	Form*	ret;
	std::string	name;
	if (form_name == "ShrubberyCreationForm")
	{
		name = "shrub";
		name += std::to_string(this->_nb_shrub);
		ret = new ShrubberyCreationForm( name , form_target);
		this->_nb_shrub++;
	}
	else if (form_name == "RobotomyRequestForm")
	{
		name = "robotomy";
		name += std::to_string(this->_nb_robo);
		ret = new RobotomyRequestForm(name, form_target);
		this->_nb_robo++;
	}
	else if (form_name == "PresidentialPardonForm")
	{
		name = "pardon";
		name += std::to_string(this->_nb_pres);
		ret = new PresidentialPardonForm(name, form_target);
		this->_nb_pres++;
	}
	else
		throw	Intern::WrongNameException();
	return ret;
}