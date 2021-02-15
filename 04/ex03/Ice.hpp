#pragma once
#include "AMateria.hpp"
class Ice : public AMateria
{
private:
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &ref);
	Ice			&operator=(const Ice &ref);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};

