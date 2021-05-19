#pragma once

template <typename T>
void	iter(T *arr, int len, void(*f)(T &one))
{
	int i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}
