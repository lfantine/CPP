#pragma once

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(const Animal & src);
	Animal&	operator=(const Animal & rhs);
	virtual ~Animal();
	virtual void	makeSound() const;
	std::string	getType() const;
protected:
	std::string _type;
};
