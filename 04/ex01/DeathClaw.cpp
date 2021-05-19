#include"DeathClaw.hpp"

DeathClaw::DeathClaw() : Enemy(230, "Deathclaw")
{
	std::cout << "Rrrawg\n";
}

DeathClaw::~DeathClaw()
{
	std::cout << "Rrrshh...\n";
}

DeathClaw::DeathClaw(const DeathClaw &ref) : Enemy(ref)
{}

DeathClaw	&DeathClaw::operator=(const DeathClaw &ref)
{
	this->type = ref.type;
	this->hit_points = ref.hit_points;
	return (*this);
}

void DeathClaw::takeDamage(int amount)
{
	amount -= 10;
	std::cout << "Claw takes " << amount << " points of damage\n";
	this->Enemy::takeDamage(amount);
}
