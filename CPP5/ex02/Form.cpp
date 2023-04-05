#include "Form.hpp"

/*                    Constructors                    */

Form::Form() : _name("DefaultForm"), _signed(false), _signed_grade(150), _exec_grade(150), _target("DefaultTarget")
{
	std::cout << "\033[2m" << "Form default constructor called" << "\033[0m" << std::endl;
}

Form::Form(std::string name) : _name(name), _signed(false), _signed_grade(150), _exec_grade(150), _target("DefaultTarget")
{
	std::cout << "\033[2m" << "Form constructor called" << "\033[0m" << std::endl;
}

Form::Form(std::string name, int signed_grade) : _name(name), _signed(false), _signed_grade(signed_grade), _exec_grade(150), _target("DefaultTarget")
{
	std::cout << "\033[2m" << "Form constructor called" << "\033[0m" << std::endl;
	if (signed_grade < 1)
		throw	Form::GradeTooHighException();
	else if (signed_grade > 150)
		throw	Form::GradeTooLowException();
}

Form::Form(std::string name, int signed_grade, int exec_grade) : _name(name), _signed(false), _signed_grade(signed_grade), _exec_grade(exec_grade), _target("DefaultTarget")
{
	std::cout << "\033[2m" << "Form constructor called" << "\033[0m" << std::endl;
	if (signed_grade < 1)
		throw	Form::GradeTooHighException();
	else if (signed_grade > 150)
		throw	Form::GradeTooLowException();
	if (exec_grade < 1)
		throw	Form::GradeTooHighException();
	else if (exec_grade > 150)
		throw	Form::GradeTooLowException();
}

Form::Form(std::string name, int signed_grade, int exec_grade, std::string target) : _name(name), _signed(false), _signed_grade(signed_grade), _exec_grade(exec_grade), _target(target)
{
	std::cout << "\033[2m" << "Form constructor called" << "\033[0m" << std::endl;
	if (signed_grade < 1)
		throw	Form::GradeTooHighException();
	else if (signed_grade > 150)
		throw	Form::GradeTooLowException();
	if (exec_grade < 1)
		throw	Form::GradeTooHighException();
	else if (exec_grade > 150)
		throw	Form::GradeTooLowException();
}

Form::Form(const Form & src) : _name(src.getName())
{
	std::cout << "\033[2m" << "Form copy constructor called" << "\033[0m" << std::endl;
	*this=src;
}

Form::~Form()
{
		std::cout << "\033[2m" << "Form destructor called" << "\033[0m" << std::endl;
}

/*                    Operators                    */

Form&	Form::operator=(const Form & rhs)
{
	this->_exec_grade = rhs.getExecGrade();
	this->_signed = rhs.getSigned();
	this->_signed_grade = rhs.getSignedGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Form & rhs)
{
	if (rhs.getSigned() == true){
		os << "Form " << rhs.getName() << " is signed. Grade : (" << rhs.getExecGrade() << ") of execution grade and (" << rhs.getSignedGrade() << ") of signature grade.";
	}
	else{
		os << "Form " << rhs.getName() << " is not signed. Grade : (" << rhs.getExecGrade() << ") of execution grade and (" << rhs.getSignedGrade() << ") of signature grade.";
	}
	return os;
}

/*                    Getters                    */

std::string	Form::getName() const
{
	return this->_name;
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int		Form::getExecGrade() const
{
	return (this->_exec_grade);
}

int		Form::getSignedGrade() const
{
	return (this->_signed_grade);
}

std::string	Form::getTarget() const
{
	return (this->_target);
}

/*                    Setters                    */

void	Form::beSigned(const Bureaucrat & crat)
{
	if (this->_signed)
		throw	Form::AlreadySignedException();
	else if (crat.getGrade() <= this->_signed_grade)
		this->_signed = true;
	else
		throw	Form::GradeTooLowException();
}

/*                    Actions                    */

void	Form::execute(const Bureaucrat & executor) const
{
	if (!this->_signed)
		throw	Form::NotSignedException();
	else if (executor.getGrade() > this->_exec_grade)
		throw	Form::GradeTooLowException();
	else
		this->makeExecute();
}
