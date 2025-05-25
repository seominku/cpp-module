

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	std::cout << "=============" << std::endl;
	WrongAnimal* wrongAnimal = new WrongAnimal();
	WrongAnimal* k = new WrongCat();
	wrongAnimal->makeSound();
	k->makeSound();
	std::cout << wrongAnimal->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	delete j;
	delete i;
	delete meta;
	delete wrongAnimal;
	delete k;
}