#pragma once

# include <iostream>

class Contact
{
private:
	std::string	fname;
	std::string	lname;
	std::string	nickname;
	std::string	num;
	std::string	secret;
public:
	int	old;
	Contact(void);
	~Contact(void);
	int	set_infos(void);
	void	get_infos(int i) const;
	void	print_infos(void) const;
};