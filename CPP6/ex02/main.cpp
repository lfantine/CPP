#include <iostream>
#include <stdlib.h>
#include <time.h>

class Base{public: virtual ~Base(){}};
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base*	generate(){
	Base*	b;
	srand(time(NULL));
	int	gen = rand() % 3 + 1;
	if (gen == 1)
		b = new A();
	else if (gen == 2)
		b = new B();
	else
		b = new C();
	return b;
}

void	identify(Base* b){
	Base*	p;
	p = dynamic_cast<A*>(b);
	if (p != NULL)
	{
		std::cout << "C'est un type A" << std::endl;
		return ;
	}
	p = dynamic_cast<B*>(b);
	if (p != NULL)
	{
		std::cout << "C'est un type B" << std::endl;
		return ;
	}
	p = dynamic_cast<C*>(b);
	if (p != NULL)
	{
		std::cout << "C'est un type C" << std::endl;
		return ;
	}
	std::cout << "error: other type" << std::endl;
}

void	identify(Base& b){
	try {
		Base&	p = dynamic_cast<A&>(b);
		std::cout << "C'est un type A" << std::endl;
		static_cast<void>(p);
	}
	catch (std::exception& e){}
	try {
		Base&	p = dynamic_cast<B&>(b);
		std::cout << "C'est un type B" << std::endl;
		static_cast<void>(p);
	}
	catch (std::exception& e){}
	try {
		Base&	p = dynamic_cast<C&>(b);
		std::cout << "C'est un type C" << std::endl;
		static_cast<void>(p);
	}
	catch (std::exception& e){}
}

int	main(void)
{
	Base*	b = generate();
	identify(b);
	identify(*b);
	return 0;
}