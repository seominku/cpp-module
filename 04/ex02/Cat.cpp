#include "Cat.hpp"
#include <iostream>
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat created" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat is Die" << std::endl;
	delete _brain;
}

Brain* Cat::GetBrain()
{
	return _brain;
}

