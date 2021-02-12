#include"PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

PowerFist::PowerFist(const PowerFist &ref) : AWeapon(ref)
{}

PowerFist	&PowerFist::operator=(const PowerFist &ref)
{
	this->name = ref.name;
	this->apcost = ref.apcost;
	this->damage = ref.damage;
	return (*this);
}
void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}