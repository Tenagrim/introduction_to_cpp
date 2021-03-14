#pragma once
#include <list>

class Span
{
private:
	Span();
public:
	Span(unsigned int size);
	~Span();
	Span(const Span &ref);
	Span	&operator=(const Span &ref);
	void	addNumber(int n);
};
#include"Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(const Span &ref)
{
}

Span	&Span::operator=(const Span &ref)
{
	return (*this);
}
