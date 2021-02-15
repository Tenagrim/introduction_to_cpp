#pragma once
#include "MateriaList.hpp"
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
private:
	MateriaList		learned;
	AMateria		*findLearned(std::string const &type);
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &ref);
	MateriaSource	&operator=(const MateriaSource &ref); 
	void			learnMateria(AMateria *);
	AMateria		*createMateria(std::string const &type);
};