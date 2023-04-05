#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Dog* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "__________" << std::endl;

	std::cout << j->getBrain().getIdea(0) << " " << std::endl;
	j->getBrain().setIdea(0, "Working");
	std::cout << j->getBrain().getIdea(0) << " " << std::endl;

	const	Dog* Dcopy = new Dog(*j);

	Dcopy->makeSound();
	std::cout << Dcopy->getBrain().getIdea(0) << " " << std::endl;
	std::cout << Dcopy->getType() << " " << std::endl;
	j->getBrain().setIdea(0, "Newworking");
	std::cout << j->getBrain().getIdea(0) << " " << std::endl;
	std::cout << Dcopy->getBrain().getIdea(0) << " " << std::endl;
	
	delete(meta);
	delete(j);
	delete(i);
	delete(Dcopy);
	std::cout << "__________" << std::endl << std::endl;

	Animal*	cage[6];
	for (int i = 0; i < 3; i++){
		cage[i] = new Cat();
	}
	for (int i = 3; i < 6; i++){
		cage[i] = new Dog();
	}

	for (int i = 0; i < 6; i++){
		delete(cage[i]);
	}

	//system("leaks demo");
	return 0;
} 