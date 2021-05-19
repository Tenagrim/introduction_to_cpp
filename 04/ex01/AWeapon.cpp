#include"AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &ref)
{
	this->name = ref.name;
	this->apcost = ref.apcost;
	this->damage = ref.damage;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : name(name), apcost(apcost), damage(damage)
{} 

AWeapon	&AWeapon::operator=(const AWeapon &ref)
{
	this->name = ref.name;
	this->apcost = ref.apcost;
	this->damage = ref.damage;
	return (*this);
}

std::string		AWeapon::getName() const
{
	return (name);
}

int				AWeapon::getAPCost() const
{
	return (apcost);
}

int				AWeapon::getDamage() const
{
	return (damage);
}
