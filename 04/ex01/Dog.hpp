
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Brain;
class Dog : public Animal
{
public:
	Dog();
	~Dog();
	virtual void makeSound() const
	{
		std::cout << "wow" << std::endl;
	}
	Brain *GetBrain();
private:
	Brain *_brain;
};
#endif