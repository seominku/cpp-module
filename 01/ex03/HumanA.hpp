
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>

class Weapon;

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){};
	void attack() const;

private:
	std::string _name;
	Weapon &_weapon;
};

#endif