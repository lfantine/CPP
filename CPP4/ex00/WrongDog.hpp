#pragma once

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const WrongDog & src);
	WrongDog& operator=(const WrongDog & rhs);
	~WrongDog();
	void	makeSound() const;
private:
};
