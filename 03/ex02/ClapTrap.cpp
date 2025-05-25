
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor" << std::endl;
	_Name = "No Name";
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDamage = 0;

}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor" << std::endl;
	_Name = name;
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
		this->_Name = claptrap._Name;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_EnergyPoint == 0)
	{
		std::cout << "Not Enough Energy" << std::endl;
		return ;
	}
	std::cout <<_Name << " attack :" << target << std::endl;
	_EnergyPoint--;
	std::cout << "Energy point :" << _EnergyPoint << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " take a Damage : " << amount << std::endl;
	_HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoint == 0)
	{
		std::cout << "Not Enough Energy" << std::endl;
		return ;
	}
	std::cout << _Name <<" repairHP" << std::endl;
	_HitPoint += amount;
	_EnergyPoint--;
	std::cout << "Energy point :" << _EnergyPoint << std::endl;
}