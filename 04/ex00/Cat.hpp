
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	virtual void makeSound() const 
	{
		std::cout << "meow" << std::endl;
	}

};

#endif