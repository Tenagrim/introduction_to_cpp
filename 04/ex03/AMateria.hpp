#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
private:
	unsigned int	_xp;
	std::string		_type;
	AMateria();
public:
	virtual ~AMateria();
	AMateria(const AMateria &ref);
	AMateria(const std::string &type);
	AMateria &operator=(const AMateria &ref);
	const std::string	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

