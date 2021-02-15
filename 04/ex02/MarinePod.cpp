#include"MarinePod.hpp"

MarinePod::MarinePod()
{
	marine = nullptr;
	next = nullptr;
}

MarinePod::MarinePod(ISpaceMarine *marine)
{
	next = nullptr;
	this->marine = marine;
}

MarinePod::~MarinePod()
{
	if (marine != nullptr)
		delete (marine);
}

MarinePod::MarinePod(const MarinePod &ref)
{
	this->next = nullptr;;
	this->marine = ref.marine->clone();
}

MarinePod	&MarinePod::operator=(const MarinePod &ref)
{
	this->next = nullptr;;
	this->marine = ref.marine->clone();
	return (*this);
}

MarinePod	*MarinePod::getNext() const
{
	return (next);
}

ISpaceMarine *MarinePod::getMarine() const
{
	return (marine);
}

MarinePod	*MarinePod::clone() const
{
	MarinePod	*res = new MarinePod();
	res->marine = this->marine->clone();
	res->next = nullptr; 
	return (res);
}

void	MarinePod::pushBack(MarinePod *pod)
{
	MarinePod *p;
	p = this;
	while (p->next != nullptr)
		p = p->next;
	p->next = pod;
}