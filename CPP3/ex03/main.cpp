#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		std::cout << "Usage : ./demo" << std::endl;
		return (0);
	}

	DiamondTrap	trap("Tibo");
	trap.attack("someone");
	trap.takeDamage(6);
	std::cout << "life of " << trap.getName() << " = " << trap.getHitpoint() << std::endl;
	trap.beRepaired(7);
	std::cout << "life of " << trap.getName() << " = " << trap.getHitpoint() << std::endl;
	trap.guardGate();
	FragTrap	flag("trapi");
	flag.highFivesGuys();
	flag.attack("UnOther");
	trap.WhoIAm();
	(void)argv;
}