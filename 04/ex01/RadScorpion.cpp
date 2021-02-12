#include"RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") 
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(const RadScorpion &ref) : Enemy(ref)
{}

RadScorpion	&RadScorpion::operator=(const RadScorpion &ref)
{
	this->type = ref.type;
	this->hit_points = ref.hit_points;
	return (*this);
}

void		RadScorpion::takeDamage(int amount)
{
	this->Enemy::takeDamage(amount);
}