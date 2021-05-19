#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{}

MateriaSource::~MateriaSource()
{
	learned.clear();
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	learned = ref.learned;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &ref)
{
	learned = ref.learned;
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *mat)
{
	if (findLearned(mat->getType()) != nullptr)
	{
		std::cout << "This type of materia \"" << mat->getType() << "\" is already learned\n";
		return;
	}
	learned.pushBack(mat);
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*req;
	req = findLearned(type);
	if (req == nullptr)
	{
		std::cout << "Unknown type of materia \"" << type << "\"\n";
		return (nullptr);
	}
	return (req->clone());
}

AMateria	*MateriaSource::findLearned(std::string const &type)
{
	int	count = learned.size();
	for (int i = 0; i < count; i++)
		if (learned[i].getType() == type)
			return &((learned[i]));
	return nullptr;
}
