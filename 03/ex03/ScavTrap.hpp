
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);

	void guardGate();

};

#endif