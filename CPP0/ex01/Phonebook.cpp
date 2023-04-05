#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

std::string	take_input(std::string mess);

Phonebook::Phonebook(void)
{
	std::cout << "\033[32m" << "Phonebook constructor called" << "\033[0m" << std::endl;
	this->nb_contact = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "\033[32m" << "Phonebook destructor called" << std::endl;
	return;
}

std::string	take_input_p(std::string mess)
{
	int	t = 0;
	std::string	in;
	std::cout << mess << " : ";
	while (t == 0)
	{
		if (!std::getline(std::cin, in))
		{
			std::cout << "\033[33m" << "FORCE EXIT !" << "\033[0m" << std::endl;
			exit(1);
		}
		else if (in == "")
		{
			std::cout << "\033[2m" << "nothing enter" << "\033[0m" << " 🔍" << std::endl;
			std::cout << mess << " : ";
		}
		else
			break ;
	}
	return (in);
}

int	Phonebook::take_oldest()
{
	if (this->nb_contact < 8)
	{
		return (0);
	}
	for (int i = 0; i < 8; i++)
	{
		if (this->contact[i].old == 8)
			return (i);
	}
	return (-1);
}

void	Phonebook::upd_old(int s)
{
	for (int i = 0; i < 8; i++)
	{
		this->contact[i].old += s;
	}
}

void	Phonebook::create_contact(void)
{
	int	pos;
	if (this->nb_contact < 8)
	{
		this->contact[this->nb_contact].set_infos();
		this->upd_old(1);
		this->contact[this->nb_contact].old = 1;
		this->nb_contact++;
	}
	else
	{
		pos = this->take_oldest();
		this->contact[pos].set_infos();
		this->upd_old(1);
		this->contact[pos].old = 1;
		std::cout << std::endl;
	}
}

int	Phonebook::get_nbcont(void) const
{
	return (this->nb_contact);
}

Contact	*Phonebook::get_contact(int	i)
{
	return (&this->contact[i]);
}

void	Phonebook::take_contact(void) const
{
	std::string	in;
	int			nb = -1;

	if (this->nb_contact == 0)
	{
		std::cout << "\033[43m" << "You have no Contact" << "\033[0m" << std::endl;
		return;
	}
	std::cout << "What contact do you want ?" << std::endl;
	std::cout << "\033[33m" << "--------------------------------------------------" << "\033[0m" << std::endl;
	std::cout << "\033[33m" << "|  INDEX  | FIRST NAME | LAST  NAME |  NICKNAME  |" << "\033[0m" << std::endl;
	std::cout << "\033[33m" << "--------------------------------------------------" << "\033[0m" << std::endl;
	for (int i = 0; i < this->get_nbcont(); i++)
	{
		this->contact[i].get_infos(i);
	}
	std::cout << "\033[33m" << "--------------------------------------------------" << "\033[0m" << std::endl;
	while (nb == -1)
	{
		in = take_input_p("Which one");
		nb = std::atoi(in.c_str());
		if (nb < 0 || nb > (this->nb_contact - 1) || in.find_first_of("0123456789"))
		{
			std::cout << in << " is not a correct number"<< std::endl;
			nb = -1;
		}
	}
	this->contact[nb].print_infos();
	return;
}
