
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Brain;

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	virtual void makeSound() const
	{
		std::cout << "meow" << std::endl;
	}
	Brain *GetBrain();
private:
	Brain *_brain;
};

#endif