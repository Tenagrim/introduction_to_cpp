#include "Array.hpp"
#include <iostream>

template <typename T>
void	print_arr(Array<T>	&arr)
{
	int len = arr.size();
	for(int i = 0; i < len; i++)
		std::cout << "[" << std::fixed << arr[i] << "] ";
	std::cout << "\n";
}

template <typename T>
void	tests()
{
	Array<T> arr(5);
	Array<T> em;

	std::cout << "initial em: \n";	
	print_arr(em);
	em = arr;
	std::cout << "assigned em: \n";	
	print_arr(em);

	std::cout << "initial arr: \n";	
	print_arr(arr);
	
	arr[2] = 55;
	arr[3] = 42;
	arr[4] = 90;

	std::cout << "modidied arr: \n";	
	print_arr(arr);

	std::cout << "modidied em: \n";	
	print_arr(em);
}

int main(void)
{
	tests<char>();
	tests<int>();
	tests<float>();

	try
	{
		Array<int> arr(3);
		arr[10] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}