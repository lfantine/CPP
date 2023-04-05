#pragma once
#include <iostream>                                                                                       

template<typename T = float>
class Array
{
public:
	//CONSTRUCTORS
	Array<T>(void);
	Array<T>(unsigned int n);
	Array<T>(const Array<T> & src);
	~Array<T>();

	//OPERATORS
	Array<T>&	operator=(const Array & rhs);
	T&	operator[](int i);

	//EXECPTIONS
	class IndexErrorException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m index invalid");
		}
	};

	//GETTERS
	unsigned int	getSize() const;

private:
	T	*_tab;
	unsigned int	_size;
};

template<typename T>
std::ostream&	operator<<(std::ostream& o, const Array<T> & rhs);

#include "Array.Class.tpp"