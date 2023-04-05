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

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "You have bullshit args !" << std::endl;
	}
	Zombie	*one = new Zombie("Alex");
	one->announce();
	randomChump("lfantine");
	randomChump("tsorabel");
	randomChump("baba");
	randomChump("bech bech la fleche");
	randomChump("der et dre");
	(void)argc;
	(void)argv;
}