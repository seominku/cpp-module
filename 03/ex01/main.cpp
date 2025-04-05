
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav;
	ScavTrap scav2("bob");

	scav.attack("aaaa");
	scav2.attack("bdb");
	scav.guardGate();
}