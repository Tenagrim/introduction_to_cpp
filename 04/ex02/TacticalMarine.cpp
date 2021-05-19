#include"TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	num = 0;
	std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &ref)
{
	(void)ref;
	num = 0;
	std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &ref)
{
	(void)ref;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine *res = new TacticalMarine;
	return (res);
}
void			TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!\n";
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *\n";
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *\n";
}


void	TacticalMarine::sayNum() const
{
	std::cout << "Tactical. num: " << num << "\n";
}

void	TacticalMarine::setNum(const int n)
{
	num = n;
}
