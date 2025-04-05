
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a1("kim");
	ClapTrap a2("bab");

	a2.attack("bob");
	a2.beRepaired(static_cast<unsigned int>(5));
	a2.takeDamage(static_cast<unsigned int>(5));
	a1.beRepaired(static_cast<unsigned int>(5));
	a1.takeDamage(static_cast<unsigned int>(5));
	a1.attack("non");

	for (int i = 0; i < 10; i++)
		a2.attack("bob");
}