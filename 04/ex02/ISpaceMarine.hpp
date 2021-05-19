#pragma once
#include "INumerated.hpp"
class ISpaceMarine : public INumerated
{
public:
	virtual ~ISpaceMarine(){}
	virtual ISpaceMarine	*clone() const = 0;
	virtual void			battleCry() const = 0;
	virtual void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;

};
