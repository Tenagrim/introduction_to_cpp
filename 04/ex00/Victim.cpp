#include "Victim.hpp"

Victim::Victim(const std::string &name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

Victim::Victim()
{}

Victim::Victim(const Victim &ref)
{
	this->name = ref.name;
}

Victim &Victim::operator=(const Victim &ref)
{
	this->name = ref.name;
	return (*this);
}

std::string Victim::getName() const
{
	return (name);
}

std::ostream &operator<<(std::ostream &os, const Victim &ref)
{
	std::cout << "I'm " << ref.getName() << " and I like otters!\n";
	return (os);
}

void		Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!\n";
}
