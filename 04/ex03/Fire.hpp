#pragma once
#include "AMateria.hpp"
class Fire : public AMateria
{
private:
public:
	Fire();
	virtual ~Fire();
	Fire(const Fire &ref);
	Fire			&operator=(const Fire &ref);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};