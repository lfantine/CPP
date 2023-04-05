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
		bool	operator==(Fixed const & rhs);
		bool	operator!=(Fixed const & rhs);
		bool	operator<(Fixed const & rhs);
		bool	operator>(Fixed const & rhs);
		bool	operator<=(Fixed const & rhs);
		bool	operator>=(Fixed const & rhs);
		Fixed	operator+(Fixed const & rhs);
		Fixed	operator-(Fixed const & rhs);
		Fixed	operator*(Fixed const & rhs);
		Fixed	operator/(Fixed const & rhs);
		Fixed	operator++(int _val);
		Fixed	operator--(int _val);
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;

		static	const Fixed&	min(Fixed& fix1, Fixed& fix2);
		static	const Fixed&	min(const Fixed& fix1, const Fixed& fix2);
		static	const Fixed&	max(Fixed& fix1, Fixed& fix2);
		static	const Fixed&	max(const Fixed& fix1, const Fixed& fix2);
	private :
		int					_fixed;
		int const static	_nbBits = 8;
};

std::ostream& operator<<(std::ostream & o, const Fixed & copy);