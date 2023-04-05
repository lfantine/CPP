/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfantine <lfantine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:15:34 by lfantine          #+#    #+#             */
/*   Updated: 2023/02/16 08:48:50 by lfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int	input_handler(std::string in, Phonebook *phone)
{
	if (in == "HELP" || in == "Help" || in == "help")
	{
		std::cout << std::endl << "__________________________________________________________" << std::endl;
		std::cout << "[ADD] = \"add a new user to the Phonebook\"" << std::endl;
		std::cout << "[SEARCH] = \"search a user in the Phonebook and give you all the informations\"" << std::endl;
		std::cout << "[EXIT] = \"exit the program\"" << std::endl;
		std::cout << "__________________________________________________________" << std::endl << std::endl;
		return (0);
	}
	else if (in == "ADD" || in == "Add" || in == "add")
	{
		phone->create_contact();
		return (0);
	}
	else if (in == "SEARCH" || in == "Search" || in == "search")
	{
		phone->take_contact();
		return (0);
	}
	else if (in == "EXIT" || in == "Exit" || in == "exit")
	{
		std::cout << "\033[33m" << "You EXIT the program ! 👋" << "\033[0m" << std::endl;
		return (-1);
	}
	else if (in == "")
	{
		return (1);
	}
	else
	{
		std::cout << "\"" << in << "\" is not a fonctional command..." << std::endl;
		return (0);
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Phonebook	phone;
	std::string	input;
	int			end;
	int			ret;
	int			nb;

	end = 0;
	ret = 0;
	while (end == 0)
	{
		if (nb == 0)
			std::cout << "Enter a command [ ADD | SEARCH | HELP | EXIT]" << std::endl;
		std::cout << "📞 >> ";
		if(!std::getline(std::cin, input))
		{
			std::cout << "\033[33m" << "FORCE EXIT !" << "\033[0m" << std::endl;
			break;
		}
		ret = input_handler(input, &phone);
		if (ret == 1 || 0)
			nb++;
		else if (ret == -1)
			end = 1;
		else
			nb = 0;
	}
	return 0;
}