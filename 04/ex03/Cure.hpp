#pragma once
#include "AMateria.hpp"
class Cure : public AMateria
{
private:
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &ref);
	Cure			&operator=(const Cure &ref);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};
