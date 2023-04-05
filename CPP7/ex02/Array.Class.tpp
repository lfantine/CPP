#pragma once
#include "Array.Class.hpp"

/*------------------Constructors-------------------*/

template<typename T>
Array<T>::Array(void) : _tab(new T[0]), _size(0){
}

template<typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]), _size(n){
	for (size_t i = 0; i < n; i++){
		_tab[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array<T> & src){
	this->_size = src.getSize();
	this->_tab = new T[src.getSize()];
	for (size_t i = 0; i < this->_size; i++){
		this->_tab[i] = src._tab[i];
	}
}

template<typename T>
Array<T>::~Array(){
	delete[] _tab;
}

/*------------------Operators-------------------*/

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T> & rhs){
	delete[]	this->_tab;
	this->_size = rhs.getSize();
	this->_tab = new T[rhs.getSize()];
	for (size_t i = 0; i < this->_size; i++){
		this->_tab[i] = rhs._tab[i];
	}
	return *this;
}

template<typename T>
T&	Array<T>::operator[](int i){
	if (i > -1 && i < static_cast<int>(this->_size))
		return this->_tab[i];
	else
		throw	Array<T>::IndexErrorException();
}

template<typename T>
std::ostream&	operator<<(std::ostream& o, const Array<T> & rhs){
	o << "size : " << rhs.getSize();
	return o;
}

/*------------------Getters-------------------*/

template<typename T>
unsigned int	Array<T>::getSize() const{
	return this->_size;
}

/*------------------Setters-------------------*/

/*------------------Actions-------------------*/