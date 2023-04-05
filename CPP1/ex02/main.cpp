#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "You have bullshit args !" << std::endl;
	}
	std::string str = "HI THIS IS BRAIN";
	std::string	*p_str = &str;
	std::string	&ref_str = str;
	std::cout << &str << " | " << &ref_str << " | " << p_str << std::endl;
	std::cout << str << " | " << ref_str << " | " << *p_str << std::endl;
	(void)argc;
	(void)argv;
}