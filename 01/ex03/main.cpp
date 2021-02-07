#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde     *horde;

    std::cout << "==========\n";
    horde = new ZombieHorde(20);
    horde->announce();
    delete (horde);
    std::cout << "==========\n";
    //horde = new ZombieHorde(0);
    //horde->announce();
    //delete (horde);
    std::cout << "==========\n";
}