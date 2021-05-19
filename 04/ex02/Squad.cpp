#include "Squad.hpp"

Squad::Squad()
{
	count = 0;
}

void Squad::clearUnits()
{
	units.clear();
}

Squad::~Squad()
{
	clearUnits();
}

void Squad::copy(const Squad &ref)
{
	this->count = ref.count;
	//std::cout << "copy\n";
	units.copy(ref.units);
}
Squad::Squad(const Squad &ref)
{
	std::cout << "Copy constructor\n";	
	copy(ref);
}

Squad &Squad::operator=(const Squad &ref)
{
	std::cout << "Assign\n";	
	copy(ref);
	return (*this);
}

int Squad::getCount() const
{
	return (units.size());
}

ISpaceMarine *Squad::getUnit(int pos) const
{
	if (pos < 0 || pos >= count)
		return (nullptr);
	return (units[pos]);
}

int		Squad::push(ISpaceMarine *cadet)
{
	if (inSquad(cadet))
		return count;
	count++;
	units.pushBack(cadet);
	return (count);
}

bool	Squad::inSquad(ISpaceMarine *marine)
{
	for (int i = 0; i < count; i++)
		if (units[i] == marine)
			return (true);
	return (false);	
}

int		Squad::size() const
{
	return units.size();
}

void	Squad::numerate() const
{
	for (int i = 0; i < count; i++)
		units[i]->sayNum();
}
