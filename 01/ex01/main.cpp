
#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = zombieHorde(5, "foo");
    
    for(int i = 0; i < 5; i++)
    {
        zombie[i].announce();
    }

    delete[] zombie;
}