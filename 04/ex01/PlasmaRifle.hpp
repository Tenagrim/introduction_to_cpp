#pragma once
#include "AWeapon.hpp"
#include <iostream>
class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &ref);
	PlasmaRifle &operator=(const PlasmaRifle &ref);
	void		attack() const; 
};
