#pragma once
#include "Enemy.hpp"
class DeathClaw : public Enemy
{
private:
public:
	DeathClaw();
	~DeathClaw();
	DeathClaw(const DeathClaw &ref);
	DeathClaw	&operator=(const DeathClaw &ref);
	void		takeDamage(int amount);
};