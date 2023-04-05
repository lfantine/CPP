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