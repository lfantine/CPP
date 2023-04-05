#pragma once

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
public:
	//CONSTRUCTORS
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name, std::string target);
	~ShrubberyCreationForm();

	//ACTIONS
	void	makeExecute() const;

private:

};

