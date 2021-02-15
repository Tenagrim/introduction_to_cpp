#include"AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back...\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &ref) : AssaultTerminator()
{
	(void)ref;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &ref)
{
	(void)ref;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	ISpaceMarine *res = new AssaultTerminator;
	return (res);
}
void			AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void			AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *\n";
}

void			AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *\n";
}

void	AssaultTerminator::sayNum() const
{
	std::cout << "Assault. num: " << num << "\n";
}

void	AssaultTerminator::setNum(const int n)
{
	num = n;
}