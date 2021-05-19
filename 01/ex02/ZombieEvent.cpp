#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
    type = "Walker";
}

ZombieEvent::~ZombieEvent()
{
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* res;
    res = new Zombie(name, this->type);
    return (res);
}

void    ZombieEvent::randomChump()
{
    Zombie*      chump;

    std::string names[] = { "Liam", "Noah", "Oliver", "Willia", "Elijah", "James",
    "Benjamin", "Lucas", "Mason", "Ethan", "Alexander", "Henry", "Jacob", "Michael",
    "Daniel", "Logan", "Jackson", "Sebastian", "Jack", "Aiden", "Owen", "Samuel",
    "Matthew", "Joseph", "Levi", "Mateo", "David", "John", "Wyatt", "Carter", "Julian",
    "Luke", "Grayson", "Isaac", "Jayden", "Theodore", "Gabriel", "Anthony", "Dylan", "Leo"};

    chump = newZombie(names[rand() % 40]);
    chump->announce();
    delete(chump);
}
