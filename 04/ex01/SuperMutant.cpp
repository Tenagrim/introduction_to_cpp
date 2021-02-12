#include"SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Supermutant")
{
	std::cout << "Gaaah. Me want smash heads\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

SuperMutant::SuperMutant(const SuperMutant &ref) : Enemy(ref)
{}

SuperMutant	&SuperMutant::operator=(const SuperMutant &ref)
{
	this->type = ref.type;
	this->hit_points = ref.hit_points;
	return (*this);
}

void SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	this->Enemy::takeDamage(amount);
}