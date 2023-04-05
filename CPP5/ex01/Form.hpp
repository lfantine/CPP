#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
public:
	//CONSTRUCTOR
	Form(void);
	Form(std::string name);
	Form(std::string name, int signed_grade);
	Form(std::string name, int signed_grade, int exec_grade);
	Form(const Form & src);
	~Form();

	//OPERATORS
	Form&	operator=(const	Form & rhs);

	//EXECPTION
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m grade too hight");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m grade too low");
		}
	};
	class AlreadySignedException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m form already sign");
		}
	};

	//GETTERS
	std::string	getName() const;
	bool		getSigned() const;
	int			getSignedGrade() const;
	int			getExecGrade() const;

	//SETTERS
	void		beSigned(const Bureaucrat & crat);

private :
	const std::string	_name;
	bool				_signed;
	int					_signed_grade;
	int					_exec_grade;
};

std::ostream&	operator<<(std::ostream& os, const Form & rhs);