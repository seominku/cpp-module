
#ifndef ZOMBIE_HPP
# define ZOMEBIE_HPP
#include <iostream>

class Zombie
{
public:
    Zombie(std::string name);
    ~Zombie();

    void announce(void) const;

private:
    std::string _name;
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif