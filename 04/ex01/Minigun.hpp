#pragma once
#include "AWeapon.hpp"
#include <iostream>
class Minigun : public AWeapon
{
private:
public:
	Minigun();
	virtual ~Minigun();
	Minigun(const Minigun &ref);
	Minigun &operator=(const Minigun &ref);
	void		attack() const; 
};
