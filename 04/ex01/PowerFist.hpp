#pragma once
#include <iostream>
#include "AWeapon.hpp"
class PowerFist : public AWeapon
{
private:
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(const PowerFist &ref);
	PowerFist	&operator=(const PowerFist &ref);
	void		 attack() const;
};

