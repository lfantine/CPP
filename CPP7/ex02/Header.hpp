#pragma once
#include <iostream>

template< typename T>
void	swap(T& a, T& b){
	T	t;
	t = a;
	a = b;
	b = t;
}

template<typename T>
const T& min(const T& a, const T& b){
	return ((a<b) ? a : b);
}

template<typename T>
const T& max(const T& a, const T& b){
	return ((a>b) ? a : b);
}

template < typename T>
void	Iter(T* adr, size_t size, void f(T&)){
	for (size_t i = 0; i < size; i++){
		f(adr[i]);
	}
}

template< typename T>
void	isValue(T& t){
	std::cout << "value is " << t <<std::endl;
}