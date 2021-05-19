#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include <string>
#include "Zombie.hpp"
class ZombieHorde
{
private:
    int             size;
    Zombie         *population;
    std::string     randName();
    std::string     randType();
public:
    void            announce();
    ZombieHorde(int N);
    ~ZombieHorde();
};
#endif
