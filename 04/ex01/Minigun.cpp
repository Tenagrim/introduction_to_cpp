#include "Minigun.hpp"
Minigun::Minigun() : AWeapon("Minigun", 10, 30)
{}

Minigun::~Minigun()
{}

Minigun::Minigun(const Minigun &ref) : AWeapon(ref)
{}

Minigun	&Minigun::operator=(const Minigun &ref)
{
	this->name = ref.name;
	this->apcost = ref.apcost;
	this->damage = ref.damage;
	return (*this);
}

void	Minigun::attack() const
{
	std::cout << "* Ratatatatattattatatattatatatttatatata *\n";
}