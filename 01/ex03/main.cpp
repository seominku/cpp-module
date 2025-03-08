
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	{
	Weapon club = Weapon("crude spiked club");

	HumanA bob("bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon *club = new Weapon("crude spiked club");

	HumanB jim("jim");
	jim.setWeapon(club);
	jim.attack();
	club->setType("some other type of club");
	jim.attack();
	}
}