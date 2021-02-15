#include"Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(const Ice &ref) : AMateria(ref)
{}

Ice	&Ice::operator=(const Ice &ref)
{
	(void)ref;
	return (*this);
}

AMateria	*Ice::clone() const
{
	AMateria	*res = new Ice();
	return (res);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *\n";
	AMateria::use(target);
}