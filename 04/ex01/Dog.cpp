

#include "Dog.hpp"
#include <iostream>
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog Created" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog is Die" << std::endl;
	delete _brain;
}

Brain *Dog::GetBrain()
{
	return _brain;
}

