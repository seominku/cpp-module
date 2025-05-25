
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor" << std::endl;
	_Name = "No Name";
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor" << std::endl;
	_Name = name;
	_HitPoint = 10;;
	_EnergyPoint = 50;
	_AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _Name << " Destruct" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_HitPoint == 0)
	{
		std::cout << _Name << " is 0 HitPoint" << std::endl;
		return ;
	}
	if (_EnergyPoint == 0)
	{
		std::cout << _Name << " is 0 EnergyPoint" << std::endl;
		return ;
	}
	std::cout << _Name << " is " <<"GateKeeper Mod" << std::endl;
}