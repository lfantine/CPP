#pragma once

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
public:
	//CONSTRUCTORS
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name, std::string target);
	~PresidentialPardonForm();

	//ACTIONS
	void	makeExecute() const;

private:

};

