#ifndef PONY_HPP
#define PONY_HPP
#include <string>
#include <iostream>

class Pony_s_horn
{
private:
    int     damage;
    float   condition;
public:
    Pony_s_horn(/* args */);
    ~Pony_s_horn();
    float   Hit();
    void    Sharpen();
};

class Pony
{
private:
    Pony_s_horn horn;
    bool        is_alive;
    int         mass;
    float       health;
    float       speed;
    int         strength;
    int         age;
    std::string name;
    void        Die();
public:
    void        DealDamage(Pony& enemy);
    Pony();
    void        GetDamage(float damage);
    void        GetOlder();
    void        GetStronger();
    std::string GetName();
    void        SetName(std::string str);
    ~Pony();
};


#endif