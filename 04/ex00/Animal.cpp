

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal Created" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Created" << std::endl;
	*this = animal;
}

Animal::~Animal()
{

}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		_type = animal._type;
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	
}
