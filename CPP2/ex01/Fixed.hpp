#pragma once

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const & src);
		Fixed&	operator=(Fixed const & rhs);
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
	private :
		int					_fixed;
		int const static	_nbBits = 8;
};

std::ostream& operator<<(std::ostream & o, const Fixed & copy);