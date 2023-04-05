#pragma once

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed&	operator=(Fixed const & rhs);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private :
		int					_fixed;
		int const static	_nbBits = 8;
};