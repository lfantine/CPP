#pragma once

#include "Form.hpp"
#include <iostream>

class Intern
{
public:
	//CONSTRUCTORS
	Intern(void);
	Intern(const Intern & src);
	~Intern();

	//OPERATORS
	Intern&	operator=(const Intern & rhs);

	//ACTIONS
	Form*	makeForm(std::string form_name, std::string form_target);

	//EXECPTIONS
	class WrongNameException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m no correspondance with name");
		}
	};

private:
	int	_nb_shrub;
	int	_nb_pres;
	int	_nb_robo;
};
