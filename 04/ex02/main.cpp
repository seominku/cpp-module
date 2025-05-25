

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "Brain.hpp"

int main(void)
{
	Animal *animal[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int i =0; i < 10; i++)
		delete animal[i];

	std::cout << "====================" << std::endl;
	Dog *dog = new Dog();
	dog->GetBrain()->SetIdea("Dog : Good Idea!!!!", 0);
	Cat *cat = new Cat();
	cat->GetBrain()->SetIdea("Cat : Bad Idea!!!!", 0);
	std::cout << dog->getType() << " : " << dog->GetBrain()->GetIdea(0) << std::endl;
	std::cout << cat->getType() << " : " << cat->GetBrain()->GetIdea(0) << std::endl;
 	delete dog;
	delete cat;	
}