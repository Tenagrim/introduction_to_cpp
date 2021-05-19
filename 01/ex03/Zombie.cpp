#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss...\n";
}

Zombie::Zombie()
{
    name = "Unnamed zombie";
    type = "Zero-type zombie";
}

Zombie::Zombie(std::string name, std:: string type)
{
    this->name = name; 
    this->type=type;
}

Zombie::~Zombie()
{
}

void    Zombie::setType(std::string type)
{
    this->type = type;
}

void    Zombie::setName(std::string name)
{
    this->name= name;
}
