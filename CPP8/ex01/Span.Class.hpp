#pragma once
#include <iostream>
#include <cstdarg>

template<typename T>
class Span
{
public:
	Span(unsigned int nb) : _max_size(nb), _size(0), _tab(new T[nb]){
		for (size_t i = 0; i < nb; i++){
			this->_tab[i] = 0;
		}
	}
	Span(const Span & src) : _max_size(src._max_size), _size(src._size), _tab(new T[_max_size]){*this=src;}
	~Span(){delete[] this->_tab;}
	Span<T>&	operator=(const Span & rhs){
		for (size_t i = 0; i < this->_max_size; i++){
			if (i < rhs._max_size)
				this->_tab[i] = rhs._tab[i];
			else
				this->_tab[i] = 0;
		}
		return *this;
	}

	void	addNumber(T	nb){
		if (this->_size == this->_max_size)
			throw	Span::SpanFullException();
		this->_tab[this->_size] = nb;
		this->_size++;
	}

	class SpanFullException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m span full");
		}
	};

	class BadIndexException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m bad index");
		}
	};

	class SpanImpossibleException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("\033[31merror:\033[0m Span cam't be create");
		}
	};

	T	shortestSpan() const{
		if (this->_size < 2)
			throw	Span::SpanImpossibleException();
		T	span = this->_tab[0] - this->_tab[1]; if (span < 0){span *= -1;}
		for (size_t i = 0; i < this->_size; i++){
			for (size_t j = 0; j < this->_size; j++){
				if (i != j){
					T	t = this->_tab[i] - this->_tab[j]; if (t < 0){t *= -1;}
					if (t < span)
						span = t;
				}
			}
		}
		return (span);
	}

	T	longestSpan() const{
		if (this->_size < 2)
			throw	Span::SpanImpossibleException();
		T	span = this->_tab[0] - this->_tab[1]; if (span < 0){span *= -1;}
		for (size_t i = 0; i < this->_size; i++){
			for (size_t j = 0; j < this->_size; j++){
				if (i != j){
					T	t = this->_tab[i] - this->_tab[j]; if (t < 0){t *= -1;}
					if (t > span)
						span = t;
				}
			}
		}
		return (span);
	}

	unsigned int	size() const{
		return this->_size;
	}

	T	operator[](unsigned int i){
		if (i < 0 || i >= this->size())
			throw	Span::BadIndexException();
		return this->_tab[i];
	}

	T	operator[](unsigned int i) const{
		if (i < 0 || i >= this->size())
			throw	Span::BadIndexException();
		return this->_tab[i];
	}

	void	addMassive(double nb, ...){
		va_list	list;
		va_start(list, nb);
		T	t = static_cast<T>(nb);
		while (t)
		{
			try{
				this->addNumber(t);
			}
			catch(const std::exception& e){std::cerr << e.what() << '\n';}
			t = static_cast<T>(va_arg(list, double));
		}
		va_end(list);
	}

	void	addMassive(int nb, ...){
		va_list	list;
		va_start(list, nb);
		T	t = nb;
		while (t)
		{
			try{
				this->addNumber(t);
			}
			catch(const std::exception& e){std::cerr << e.what() << '\n';}
			t = static_cast<T>(va_arg(list, T));
		}
		va_end(list);
	}

private:
	Span(){}
	const	unsigned int _max_size;
	unsigned int		_size;
	T					*_tab;
};

template<typename T>
std::ostream&	operator<<(std::ostream& o, const Span<T> & rhs){
	o << "-----SPAN-----" << std::endl << "size = " << rhs.size() << std::endl;
	for (size_t i = 0; i < rhs.size(); i++){
		o << "element [" << i << "] = " << rhs[i] << std::endl;
	}
	o << "--------------" << std::endl;
	return o;
}