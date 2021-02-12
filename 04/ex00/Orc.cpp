#include"Orc.hpp"

Orc::Orc()
{}

Orc::~Orc()
{
	std::cout << "Arrghh...\n";
}

Orc::Orc(const std::string &name) : Victim(name)
{
	std::cout << "Waagh!!\n";
}

Orc::Orc(const Orc &ref) : Victim(ref)
{}

Orc	&Orc::operator=(const Orc &ref)
{
	this->name = ref.name;
	return (*this);
}

void Orc::getPolymorphed() const
{
	std::cout << name <<" has been turned into a green slime!\n";
}