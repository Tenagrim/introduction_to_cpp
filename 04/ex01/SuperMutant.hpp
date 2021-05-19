#pragma once
#include "Enemy.hpp"
class SuperMutant : public Enemy
{
private:
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant &ref);
	SuperMutant	&operator=(const SuperMutant &ref);
	void		takeDamage(int amount);
};
