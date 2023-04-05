#pragma once

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contact[8];
		int	nb_contact;
		int	take_oldest();
	public:
		Phonebook(void);
		~Phonebook(void);
		void	upd_old(int i);
		void	create_contact(void);
		void	take_contact(void) const;
		int		get_nbcont(void) const;
		Contact	*get_contact(int i);
};