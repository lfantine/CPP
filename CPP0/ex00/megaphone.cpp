/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfantine <lfantine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:15:34 by lfantine          #+#    #+#             */
/*   Updated: 2023/02/16 10:23:01 by lfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string ret;
	if (argc < 2)
	{
		std::cout << "\033[32m" << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
		ret += argv[i];
		
	for (int i = 0; i < (int)ret.size(); i++)
		ret[i] = std::toupper(ret[i]);
		
	std::cout << ret << std::endl;
	return 0;
}