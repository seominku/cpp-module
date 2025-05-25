
#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
}

WrongAnimal::~WrongAnimal()
{

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	if (this != &animal)
		_type = animal._type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "wrong Animal" << std::endl;
}
