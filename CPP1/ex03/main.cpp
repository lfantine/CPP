#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "You have bullshit args !" << std::endl;
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.set_type("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.set_weapon(club);
		jim.attack();
		club.set_type("some other type of club");
		jim.attack();
		club.set_type("big club");
		jim.attack();
	}
	(void)argc;
	(void)argv;
}