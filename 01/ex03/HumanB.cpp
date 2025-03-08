
#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack() const
{
	if (_weapon == NULL)
	{
		std::cout << "have no weapon" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their ";
	_weapon->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
	_flag = true;
}

HumanB::~HumanB()
{
	if (_flag == true)
		delete _weapon;
}


