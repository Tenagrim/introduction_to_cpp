#pragma once
#include "ISpaceMarine.hpp"
class MarinePod
{
private:
	ISpaceMarine	*marine;
	MarinePod		*next;
	MarinePod();
public:
	MarinePod(ISpaceMarine *marine);
	~MarinePod();
	MarinePod(const MarinePod &ref);
	MarinePod	&operator=(const MarinePod &ref);
	MarinePod	*getNext() const;
	MarinePod	*clone() const;
	ISpaceMarine	*getMarine() const;
	void		pushBack(MarinePod *pod);
};
