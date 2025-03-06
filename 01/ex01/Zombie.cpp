
#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << _name << " is dead" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout<< _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name)
{
    _name = name;
}
