#pragma once
#include "Enemy.hpp"
class RadScorpion : public Enemy
{
private:
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion &ref);
	RadScorpion	&operator=(const RadScorpion &ref);
	void		takeDamage(int amount);
};

