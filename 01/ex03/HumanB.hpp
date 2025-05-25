
#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
class Weapon;
class HumanB
{
public:
	HumanB(std::string name) : _name(name), _weapon(NULL), _flag(false){};
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon *weapon);

private:
	std::string _name;
	Weapon *_weapon;
	int	_flag;
};

#endif