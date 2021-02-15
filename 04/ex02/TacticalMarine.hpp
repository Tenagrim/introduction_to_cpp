#pragma once
#include <iostream>
#include "ISpaceMarine.hpp"
#include "INumerated.hpp"
class TacticalMarine : public ISpaceMarine
{
private:
	int num;
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(const TacticalMarine &ref);
	TacticalMarine &operator=(const TacticalMarine &ref);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
	void			applySolider(ISpaceMarine *cadet);

	void			sayNum() const;
	void			setNum(const int);
};
