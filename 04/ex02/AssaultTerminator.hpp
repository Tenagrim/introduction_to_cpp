#pragma once
#include <iostream>
#include "ISpaceMarine.hpp"
#include "INumerated.hpp"
class AssaultTerminator : public ISpaceMarine
{
private:
	int num;
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &ref);
	AssaultTerminator &operator=(const AssaultTerminator &ref);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
	
	void			sayNum() const;
	void			setNum(int);
};
