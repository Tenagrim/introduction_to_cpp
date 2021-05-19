#pragma once
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator	easyFind(T &cont, int find)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), find);
	if (it == cont.end())
		throw std::runtime_error("number was not found");
	return(it);
}
