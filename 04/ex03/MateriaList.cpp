#include"MateriaList.hpp"
#include <iostream>
MateriaList::MateriaList()
{
	content = nullptr;
}

MateriaList::~MateriaList()
{
	clear();
}

void	MateriaList::clear()
{
	MateriaPod *p1;
	MateriaPod *p2;

	p1 = this->content;
	while (p1 != nullptr)
	{
		p2 = p1;
		p1 = p1->getNext();
		delete p2;
	}
	content = nullptr;
}

MateriaList::MateriaList(const MateriaList &ref)
{
	copy(ref);
}

MateriaList	&MateriaList::operator=(const MateriaList &ref)
{
	copy(ref);
	return (*this);
}

void		MateriaList::copy(const MateriaList &ref)
{
	clear();
	//std::cout << "ucopy "<< ref.size()<< " " << &ref << " " << this <<"\n";
	MateriaPod	*p;
	p = ref.content;
	while (p != nullptr)
	{
	//	std::cout << "ucopy ent\n";
		this->pushBack(p->clone());
		p = p->getNext();
	}	
}

void	MateriaList::pushBack(MateriaPod *pod)
{
	if (content == nullptr)
	{
		content = pod;
		return;
	}
	content->pushBack(pod);
}

void			MateriaList::pushBack(AMateria *cadet)
{
	pushBack(new MateriaPod(cadet));
}

AMateria	&MateriaList::operator[](const int index)
{
	MateriaPod	*p;
	int			n;

	p = content;
	n = 0;
	if (index < 0)
		throw (std::out_of_range("out of range"));
	while (n < index)
	{
		p = p->getNext();
		n++;
		if (p == nullptr)
			throw (std::out_of_range("out of range"));
	}
	return (*(p->getContent()));
}

int		MateriaList::size() const
{
	int count = 0;
	MateriaPod *p = content;

	while (p != nullptr)
	{
		p = p->getNext();
		count++;
	}
	return (count);
}