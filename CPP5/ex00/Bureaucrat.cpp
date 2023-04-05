#include "Bureaucrat.hpp"
#include <iostream>

/*                    Constructors                    */

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
	std::cout << "\033[2m" << "Bureaucrat default constructor called" << "\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "\033[2m" << "Bureaucrat constructor called" << "\033[0m" << std::endl;
	if (grade < 1)
		throw	Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw	Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src.getName())
{
	*this=src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[2m" << "Bureaucrat destructor called" << "\033[0m" << std::endl;
}

/*                    Operators                    */

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat & rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return os;
}

/*                    Getters                    */

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/*                    Setters                    */

void	Bureaucrat::upGrade()
{
	if (this->_grade == 1)
		throw	Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::downGrade()
{
	if (this->_grade == 150)
		throw	Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}