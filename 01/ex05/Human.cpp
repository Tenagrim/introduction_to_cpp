#include "Human.hpp"
Human::Human(/* args */)
{
}

Human::~Human()
{
}

std::string     Human::identify()
{
    return (this->brain.identify());
}


Brain&  Human::getBrain()
{
   return (brain); 
}
