#include"span.hpp"

Span::Span()
{}

Span::Span(unsigned int size)
{
	_content.resize(size);
	_size = 0;
}

Span::~Span()
{}

Span::Span(const Span &ref)
{
	this->_content = ref._content;
}

Span	&Span::operator=(const Span &ref)
{
	this->_content = ref._content;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_size >= _content.capacity())
		throw (std::runtime_error("no more free space in span"));
	_content[_size] = n;
	_size++;
}

void	Span::addRange(std::vector<int> &range)
{
	if (range.size() + _size > _content.capacity())
		throw (std::runtime_error("no more free space in span to add that range"));
	std::copy(range.begin(), range.end(), _content.begin() + _size);
	_size += range.size();
}

int		Span::longestSpan()
{
	if (_content.size() < 2)
		throw (std::runtime_error("there is mo span. not enough elements"));
	return (*(std::max_element(_content.begin(), _content.end())) - *(std::min_element(_content.begin(),_content.end())));
}

//#define DEBUG

int		Span::shortestSpan()
{
	std::vector<int>::iterator	p1;
	std::vector<int>::iterator	p2;
	int							shortest;
	int							tmp;


	if (_content.size() < 2)
		throw (std::runtime_error("there is mo span. not enough elements"));
	#ifdef DEBUG
		std::cout << "before sort:\n";
		display();
	#endif
	std::sort(_content.begin(), _content.end());
	#ifdef DEBUG
		std::cout << "after sort:\n";
		display();
	#endif
	p2 = _content.begin();
	p1 = p2 + 1;
	shortest = *p1 - *p2;
	while (p1 != _content.end())
	{
		tmp = *p1 - *p2;
	#ifdef DEBUG
		std::cout << "tmp:" << tmp << "\n";
	#endif
		if (tmp < shortest)
			shortest = tmp;
		if (!shortest)
			break;
		p1++;
		p2++;
	}
	return shortest;
}

void	Span::display()
{
	std::vector<int>::iterator it = _content.begin();
	while (it != _content.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << "\n";	
}

unsigned int	Span::size() const
{
	return (_size);
}
