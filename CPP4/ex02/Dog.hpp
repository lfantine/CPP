#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog & src);
	Dog&	operator=(const Dog & rhs);
	~Dog();
	void	makeSound() const;
	Brain&	getBrain() const;
private:
	Brain	*brain;
};
