#include"MateriaPod.hpp"

MateriaPod::MateriaPod()
{
	content = nullptr;
	next = nullptr;
}

MateriaPod::MateriaPod(AMateria *content)
{
	next = nullptr;
	this->content = content;
}

MateriaPod::~MateriaPod()
{
	if (content != nullptr)
		delete (content);
}

MateriaPod::MateriaPod(const MateriaPod &ref)
{
	this->next = nullptr;;
	this->content = ref.content->clone();
}

MateriaPod	&MateriaPod::operator=(const MateriaPod &ref)
{
	this->next = nullptr;;
	this->content = ref.content->clone();
	return (*this);
}

MateriaPod	*MateriaPod::getNext() const
{
	return (next);
}

AMateria *MateriaPod::getContent() const
{
	return (content);
}

MateriaPod	*MateriaPod::clone() const
{
	MateriaPod	*res = new MateriaPod();
	res->content = this->content->clone();
	res->next = nullptr; 
	return (res);
}

void	MateriaPod::pushBack(MateriaPod *pod)
{
	MateriaPod *p;
	p = this;
	while (p->next != nullptr)
		p = p->next;
	p->next = pod;
}
