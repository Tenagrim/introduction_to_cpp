#pragma once
#include <stdexcept>
template <typename T>
class Array
{
private:
	unsigned int	_size;
	T				*content;
	void			copy(Array<T> const &ref);
public:
	Array();
	Array(unsigned int size);
	~Array();
	Array(const Array &ref);
	Array			&operator=(const Array &ref);
	T				&operator[](const unsigned int index);
	unsigned int	size() const;
};

#include "Array.ipp"