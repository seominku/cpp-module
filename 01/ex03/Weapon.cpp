
#include "Weapon.hpp"

void	Weapon::setType(const std::string &type)
{
	_type = type;
}

void	Weapon::getType() const
{
	std::cout << _type;
}