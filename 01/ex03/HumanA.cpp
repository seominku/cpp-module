
#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack() const
{
	std::cout << _name << " attacks with their ";
	_weapon.getType();
	std::cout << std::endl;
}