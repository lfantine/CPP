#pragma once

#include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(const Brain & src);
	Brain&	operator=(const Brain & rhs);
	~Brain();

	std::string	getIdea(int	i) const;
	void		setIdea(int	i, std::string id);
protected:
	std::string	idea[100];
};
