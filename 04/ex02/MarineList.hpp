#pragma once
#include "MarinePod.hpp"
#include <stdexcept>
class MarineList
{
private:
	MarinePod	*content;
	void			pushBack(MarinePod *pod);
public:
	MarineList();
	~MarineList();
	MarineList(const MarineList &ref);
	MarineList		&operator=(const MarineList &ref);
	void			pushBack();
	void			clear();
	void			copy(const MarineList &ref);
	MarineList		&clone();
	void			pushBack(ISpaceMarine *cadet);
	ISpaceMarine	*operator[](const int index) const;
	int				size() const;
};
