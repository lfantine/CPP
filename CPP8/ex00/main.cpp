#include <iostream>
#include <list>
#include <vector>

template<typename T>
int	easyfind(T&	c, int value){
	if (c.size() <= 0)
	{
		std::cout << "no value found...." << std::endl;
		return 0;
	}
	typename T::iterator	it = c.begin();
	typename T::iterator	it2 = c.end();
	int			pos = 0;
	while (it != it2){
		if (*it == value){
			std::cout << value << " found in pos " << pos << std::endl;
			return 1;
		}
		it++;
		pos++;
	}
	std::cout << "no value found...." << std::endl;
	return 0;
}

int	main(){
	std::list<int>	mlist;
	mlist.push_back(15);
	mlist.push_back(1);
	mlist.push_back(12);
	mlist.push_back(6);
	mlist.push_back(9);
	easyfind(mlist, -13);
	return 0;
}