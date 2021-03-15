/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:42:13 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:42:15 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		Span::shortestSpan()
{
	std::vector<int>::iterator	s_min_b;
	std::vector<int>::iterator	s_min_a;
	std::vector<int>::iterator	min;
	
	if (_content.size() < 2)
		throw (std::runtime_error("there is no span. not enough elements"));
	min = std::min_element(_content.begin(), _content.end());
	if (min == _content.begin())
		return(*(std::min_element((_content.begin() + 1), _content.end())) - *min);
	else if(min == _content.end() - 1)
		return(*(std::min_element(_content.begin(), _content.end() - 2)) - *min);
	else
	{
		s_min_b =  std::min_element(_content.begin(), min - 1);
		s_min_a = std::min_element(min + 1, _content.end());
		return(std::min(*s_min_a, *s_min_b) - *min);
	}	
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
