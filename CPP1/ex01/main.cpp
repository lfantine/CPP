#include <iostream>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*leZ = new Zombie(name);
	return (leZ);
}

void	randomChump(std::string name)
{
	Zombie	*Alex = newZombie(name);
	Alex->announce();
	delete Alex;
	return ;
}

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie*	horde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		horde[i].set_name(name);
	}
	return (horde);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "You have bullshit args !" << std::endl;
	}
	Zombie	*horde = zombieHorde(10, "team42");
	for (int i = 0; i < 10; i++) {
		horde[i].announce();
	}
	delete[] horde;
	(void)argc;
	(void)argv;
}