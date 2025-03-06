

#include "Zombie.hpp"

int main(void)
{
    Zombie zombie("Foo");
    zombie.announce();
    randomChump("random Zombie");
    Zombie *nZombie = newZombie("newZombie");
    nZombie->announce();

    delete nZombie;
}