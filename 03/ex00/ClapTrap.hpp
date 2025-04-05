

#include <iostream>

class ClapTrap
{

public:
	ClapTrap();
	ClapTrap(const ClapTrap &claptrap);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &claptrap);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _Name;
	unsigned int _HitPoint;
	unsigned int _EnergyPoint;
	unsigned int _AttackDamage;
};