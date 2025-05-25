
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(const Animal& animal);
	virtual ~Animal();
	Animal& operator=(const Animal& animal);
	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;
};


#endif