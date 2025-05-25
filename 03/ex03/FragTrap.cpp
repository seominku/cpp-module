
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_HitPoint = 100;
	_AttackDamage = 30;
	_EnergyPoint = 100;
}

FragTrap::FragTrap(std::string Name)
{
	_HitPoint = 100;
	_AttackDamage = 30;
	_EnergyPoint = 100;
	_Name = Name;
}

FragTrap::~FragTrap()
{
	std::cout << _Name << " is Die" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _Name  << ": highFive!!!" << std::endl;
}