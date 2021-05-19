#pragma once
#include <string>
class AWeapon
{
protected:
	std::string		name;
	int				apcost;
	int				damage;
	AWeapon();
public:
	virtual ~AWeapon();
	AWeapon(const AWeapon &ref);
	AWeapon(const std::string &name, int apcost, int damage);
	std::string			getName() const;
	int					getDamage() const;
	int					getAPCost() const;
	AWeapon				&operator=(const AWeapon &ref);
	virtual void		attack() const = 0;
};


