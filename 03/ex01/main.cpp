
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav;
	ScavTrap scav2("bob");
	
	scav = scav2;
	scav.attack("aaaa");
	scav2.attack("bdb");
	scav.guardGate();
}