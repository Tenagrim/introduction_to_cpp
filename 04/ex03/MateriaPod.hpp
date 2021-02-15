#pragma once
#include "AMateria.hpp"
class MateriaPod
{
private:
	AMateria		*content;
	MateriaPod		*next;
	MateriaPod();
public:
	MateriaPod(AMateria *content);
	~MateriaPod();
	MateriaPod(const MateriaPod &ref);
	MateriaPod	&operator=(const MateriaPod &ref);
	MateriaPod	*getNext() const;
	MateriaPod	*clone() const;
	AMateria	*getContent() const;
	void		pushBack(MateriaPod *pod);
};