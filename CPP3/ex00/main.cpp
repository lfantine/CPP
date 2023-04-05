#include "ClapTrap.hpp"

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		std::cout << "Usage : ./demo" << std::endl;
		return (0);
	}

	ClapTrap	trap("Tibo");
	trap.attack("someone");
	trap.takeDamage(6);
	std::cout << "life of " << trap.getName() << " = " << trap.getHitpoint() << std::endl;
	trap.beRepaired(7);
	std::cout << "life of " << trap.getName() << " = " << trap.getHitpoint() << std::endl;
	ClapTrap	trap2(trap);
	std::cout << "life of " << trap2.getName() << " = " << trap2.getHitpoint() << std::endl;

	(void)argv;
}