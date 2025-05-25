#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& animal);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& animal);
	void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;
};


#endif