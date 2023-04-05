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
	Form(std::string name, int signed_grade, int exec_grade, std::string target);
	Form(const Form & src);
	virtual	~Form() = 0;

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
			return ("\033[31merror:\033[0m form already signed");
		}
	};
	class NotSignedException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m form not signed");
		}
	};

	//GETTERS
	std::string	getName() const;
	bool		getSigned() const;
	int			getSignedGrade() const;
	int			getExecGrade() const;
	std::string	getTarget() const;

	//SETTERS
	void		beSigned(const Bureaucrat & crat);

	//ACTIONS
	void			execute(const Bureaucrat & executor) const;
	virtual void	makeExecute() const = 0;

protected :
	const std::string	_name;
	bool				_signed;
	int					_signed_grade;
	int					_exec_grade;
	std::string			_target;
};

std::ostream&	operator<<(std::ostream& os, const Form & rhs);