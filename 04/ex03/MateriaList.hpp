#pragma once
#include "MateriaPod.hpp"
#include <stdexcept>
class MateriaList
{
private:
	MateriaPod		*content;
	void			pushBack(MateriaPod *pod);
	void			copy(const MateriaList &ref);
public:
	MateriaList();
	~MateriaList();
	MateriaList(const MateriaList &ref);
	MateriaList		&operator=(const MateriaList &ref);
	void			pushBack();
	void			clear();
	MateriaList		&clone();
	void			pushBack(AMateria *cadet);
	AMateria		&operator[](const int index);
	int				size() const;
};