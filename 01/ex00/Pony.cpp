#include "Pony.hpp"

Pony_s_horn::Pony_s_horn()
{
    condition = 100;
    damage = 5;
}

Pony_s_horn::~Pony_s_horn()
{
}

void    Pony_s_horn::Sharpen()
{
    damage++;
    condition -= 0.5;
}

float   Pony_s_horn::Hit()
{
    condition -= 1;
    return  damage;
}

Pony::Pony(/* args */)
{
    std::cout << "A new pony was born. Give a name for it.\n";
    age = 0;
    mass = 5;
    speed = 5.5;
    strength = 1;
    is_alive = true;
    name = "Unnamed pony";
}

void Pony::SetName(std::string str)
{
    name = str;
}

std::string Pony::GetName()
{
    return name;
}

Pony::~Pony()
{
    Die();
}

void Pony::GetOlder()
{
    age++;
    std::cout << name << " is getting older. It's age: " << age << std::endl;
    if (age < 10)
        mass += 5;
    if (age > 40)
    {
        strength--;
        speed -= (age - 40) * 0.5;
    }
    if (age > 150)
        Die();
}

void Pony::GetStronger()
{
    horn.Sharpen();
    strength++;
    speed += 3.5;
    std::cout << name << " is getting stronger. It's strength: " << strength << std::endl;
}

void    Pony::DealDamage(Pony& enemy)
{
    float damage;

    damage = horn.Hit() * strength * 0.3;
    enemy.GetDamage(damage);
}

void    Pony::Die()
{
    std::cout << "Pony " << name << " died at " << age << " years old\n";
    is_alive = false;
}

void    Pony::GetDamage(float damage)
{
    health -= damage;
    if (health <= 0)
        Die();
}