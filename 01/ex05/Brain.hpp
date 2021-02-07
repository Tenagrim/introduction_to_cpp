#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#include <sstream>
class Brain
{
private:
    float       mass;
    float       effciency;
public:
    void        think();
    std::string identify();
    Brain(/* args */);
    ~Brain();
};
#endif

