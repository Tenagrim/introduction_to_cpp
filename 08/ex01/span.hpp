#pragma once
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
class Span
{
private:
	unsigned int _size;
	Span();
	std::vector<int> _content;
public:
	Span(unsigned int size);
	~Span();
	Span(const Span &ref);
	Span	&operator=(const Span &ref);
	void	addNumber(int n);
	void	addRange(std::vector<int> &range);
	int		shortestSpan();
	int		longestSpan();
	void	display();
	unsigned int	size() const;
};
