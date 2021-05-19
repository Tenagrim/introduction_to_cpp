#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
class Character : public ICharacter
{
private:
	std::string	name;
	AMateria	*spells[4];
	int			activeSpells;
	void		nullSpells();
	bool		isEquipped(AMateria *m);
	void		clearSpells();
	void		shift();
	Character();
public:
	Character(std::string const &name);
	~Character();
	Character(const Character &ref);
	Character &operator=(const Character &ref); 
	std::string const	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};
