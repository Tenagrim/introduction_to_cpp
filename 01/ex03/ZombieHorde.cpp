#include "ZombieHorde.hpp"
#include <iostream>
ZombieHorde::ZombieHorde(int N)
{
    size = N;
    if (N <= 0)
        return;
    population = new Zombie[N];
    for (int i = 0 ; i < N; i++)
    {
        population[i].setName(randName());
        population[i].setType(randType());
    }
}

ZombieHorde::~ZombieHorde()
{
    //std::cout << "Horde destr called\n";
    if (size > 0)
    delete [] population;
}

void    ZombieHorde::announce()
{
    for (int i = 0; i < size; i++)
        population[i].announce();
}

std::string ZombieHorde::randName()
{
    std::string names[] = { "Liam", "Noah", "Oliver", "Willia", "Elijah", "James",
    "Benjamin", "Lucas", "Mason", "Ethan", "Alexander", "Henry", "Jacob", "Michael",
    "Daniel", "Logan", "Jackson", "Sebastian", "Jack", "Aiden", "Owen", "Samuel",
    "Matthew", "Joseph", "Levi", "Mateo", "David", "John", "Wyatt", "Carter", "Julian",
    "Luke", "Grayson", "Isaac", "Jayden", "Theodore", "Gabriel", "Anthony", "Dylan", "Leo"};
    return(names[rand() % 40]);
}

std::string ZombieHorde::randType()
{
    std::string names[] = { "Runner", "Stalker", "Clicker", "Bloater", "Shambler", "Rat King"};
    return(names[rand() % 6]);
}