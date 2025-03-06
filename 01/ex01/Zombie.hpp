
#include <iostream>

class Zombie
{
public:
    Zombie();
    ~Zombie();

    void announce(void) const;
    void SetName(std::string name);
private:
    std::string _name;
};

Zombie *zombieHorde(int N, std::string name);