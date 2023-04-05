#include "MutantStack.class.hpp"
#pragma once

template<typename T>
MutantStack<T>::MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack & src){
	*this=src;
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack & rhs){
	return *this;
	static_cast<void>(rhs);
}