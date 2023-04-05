#pragma once

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
public:
	//CONSTRUCTORS
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name, std::string target);
	~RobotomyRequestForm();

	//ACTIONS
	void	makeExecute() const;

private:

};

