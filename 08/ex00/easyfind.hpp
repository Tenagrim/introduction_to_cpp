#pragma once
#include <algorithm>
#include <stdexcept>

template <typename T>
int	*easyFind(T &cont, int find)
{
	typename T::iterator it = cont.begin();
	while(it != cont.end())
	{
		if(*it == find)
			return(&(*it));
		it++;
	}
	throw std::runtime_error("number was not found");
	return(NULL);
}
