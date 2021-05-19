#include"MarineList.hpp"
#include <iostream>
MarineList::MarineList()
{
	content = nullptr;
}

MarineList::~MarineList()
{
	clear();
}

void	MarineList::clear()
{
	MarinePod *p1;
	MarinePod *p2;

	p1 = this->content;
	while (p1 != nullptr)
	{
		p2 = p1;
		p1 = p1->getNext();
		delete p2;
	}
	content = nullptr;
}

MarineList::MarineList(const MarineList &ref)
{
	copy(ref);
}

MarineList	&MarineList::operator=(const MarineList &ref)
{
	copy(ref);
	return (*this);
}

void		MarineList::copy(const MarineList &ref)
{
	clear();
	//std::cout << "ucopy "<< ref.size()<< " " << &ref << " " << this <<"\n";
	MarinePod	*p;
	p = ref.content;
	while (p != nullptr)
	{
	//	std::cout << "ucopy ent\n";
		this->pushBack(p->clone());
		p = p->getNext();
	}	
}

void	MarineList::pushBack(MarinePod *pod)
{
	if (content == nullptr)
	{
		content = pod;
		return;
	}
	content->pushBack(pod);
}

void			MarineList::pushBack(ISpaceMarine *cadet)
{
	pushBack(new MarinePod(cadet));
}

ISpaceMarine	*MarineList::operator[](const int index) const
{
	MarinePod	*p;
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
	return (p->getMarine());
}

int		MarineList::size() const
{
	int count = 0;
	MarinePod *p = content;

	while (p != nullptr)
	{
		p = p->getNext();
		count++;
	}
	return (count);
}
