#pragma once

#include <iostream>

class	ClapTrap
{
	public :
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & clap);
		ClapTrap&	operator=(const ClapTrap & rhs);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName() const;
		int			getAttack() const;
		int			getHitpoint() const;
		int			getEnergy() const;
		
	private :
		void		setEnergie(int	new_point);
		void		setHit(int	new_hit);
		ClapTrap(void);
		std::string _Name;
		int	_HitPoint;
		int	_EnergiePoint;
		int	_AttackDamage;
};