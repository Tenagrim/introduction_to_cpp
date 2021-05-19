#include "Brain.hpp"
Brain::Brain(/* args */)
{
    mass = 5;
    effciency = 0.5;
}

Brain::~Brain()
{
}

std::string     Brain::identify()
{
    std::stringstream ss;
    ss << this;
    return (ss.str());
}

void    Brain::think()
{
    std::cout << "Thinking....\n";
}
