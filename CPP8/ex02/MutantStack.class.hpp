#pragma once
#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack & src);
	~MutantStack(void);
	MutantStack<T>&	operator=(const MutantStack & rhs);

	typedef typename std::stack<T>::container_type::iterator	iterator;
	iterator	begin(void){
		return this->c.begin();
	}
	iterator	end(void){
		return this->c.end();
	}
};

#include "MutantStack.class.tpp"