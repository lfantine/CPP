#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "\033[32m" << "Contact constructor called" << "\033[0m" << std::endl;
	this->fname = "default first name";
	this->lname = "default last name";
	this->old = 1;
	return;
}

Contact::~Contact(void)
{
	std::cout << "\033[32m" << "Contact destructor called" << std::endl;
	return;
}

int	is_all_num(std::string	str)
{
	int	i = 0;
	while (str[i])
	{
		if (std::isdigit((int)str[i]) == 0 || i >= 10)
		{
			return (-1);
		}
		i++;
	}
	if (i != 10)
		return (-1);
	return (0);
}

std::string	take_input(std::string mess)
{
	int	t = 0;
	std::string	in;
	std::cout << "Enter the "<< "\033[3m" << "contact " << mess << "\033[0m" << " : ";
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
			std::cout << "Enter the "<< "\033[3m" << "contact " << mess << "\033[0m" << " : ";
		}
		else
			break ;
	}
	return (in);
}

int	Contact::set_infos()
{
	std::string	in;
	int			ok = 0;
	in = take_input("first name");
	this->fname = in;
	in = take_input("last name");
	this->lname = in;
	in = take_input("nickname");
	this->nickname = in;
	while (ok == 0)
	{
		in = take_input("phone number");
		if (is_all_num(in) == 0)
			ok = 1;
		else
			std::cout << "\033[2m" << "ERROR with phone number !" << "\033[0m" << std::endl;
	}
	this->num = in;
	in = take_input("secret");
	this->secret = in;
	return (0);
}

void	print_ten(std::string str)
{
	if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << ".";
	}
	else
	{
		std::cout << str;
		for (int i = str.length() - 1; i < 9; i++)
			std::cout << " ";
	}
}

void	Contact::get_infos(int i) const
{
	std::cout << "\033[33m" << "|  [ " << "\033[0m" << i << "\033[33m" << " ]  | " << "\033[0m";
	print_ten(this->fname);
	std::cout << "\033[33m" << " | " << "\033[0m";
	print_ten(this->lname);
	std::cout << "\033[33m" << " | " << "\033[0m";
	print_ten(this->nickname);
	std::cout << "\033[33m" << " |" << "\033[0m" << std::endl;
}

void	Contact::print_infos(void) const
{
	std::cout << std::endl << "            ";
	std::cout << "Fiche de [ " << "\033[44m" << this->fname << "\033[0m" << " ]" << std::endl;
	std::cout << "*---------------------------------------------------*" << "\033[0m" << std::endl;
	std::cout << "First name : " << "\033[36m" << this->fname << "\033[0m" << std::endl;
	std::cout << "Last name : " << "\033[36m" << this->lname << "\033[0m" << std::endl;
	std::cout << "Nickname : " << "\033[36m" << this->nickname << "\033[0m" << std::endl;
	std::cout << "Phone number : " << "\033[36m" << this->num << "\033[0m" << std::endl;
	std::cout << "Secret : " << "\033[36m" << this->secret << "\033[0m" << std::endl;
	std::cout << "\033[3e" << "*---------------------------------------------------*" << "\033[0m" << std::endl << std::endl;
	return ;
}