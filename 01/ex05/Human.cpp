#include "Human.hpp"
Human::Human(/* args */)
{
}

Human::~Human()
{
}

std::string     Human::identify()
{
    std::stringstream ss;
    ss << this;
    return (ss.str());
}


Brain&  Human::getBrain()
{
   return (brain); 
}