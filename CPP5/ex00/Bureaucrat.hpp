#pragma once

#include <iostream>

class Bureaucrat
{
public:
	//	Constructeur
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & src);
	~Bureaucrat();

	//Operator
	Bureaucrat&	operator=(const Bureaucrat & rhs);

	//	Getters
	std::string	getName() const;
	int			getGrade() const;

	//	Setters
	void	upGrade();
	void	downGrade();

	//Execption
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
private :
	const std::string	_name;
	int					_grade;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat & rhs);