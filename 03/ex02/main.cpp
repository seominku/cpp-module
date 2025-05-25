
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag1("one");
	FragTrap frag2("aaaa");
	FragTrap frag3;

	frag3 = frag1;
	frag3.highFivesGuys();
	frag2.highFivesGuys();
	frag2.takeDamage(10);
	frag2.attack("eeee");
}