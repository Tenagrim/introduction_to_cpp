#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>
#include <string>

template <typename Container>
void	display(Container &cont)
{
	typename Container::iterator it = cont.begin();
	while(it != cont.end())
	{
		std::cout << "[[" << *it << " | " << &(*it) << "]] ";
		it++;
	}
	std::cout << "\n";
}

template <typename Container>
void	testcase(Container &cont, int n)
{
	std::cout << "=========================\n";
	try
	{
		display(cont);
		int *found = easyFind(cont, n);
		std::cout << "[[" << *found << " | " << found << "]]\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "=========================\n";
}


int main(int ac, char** av)
{
	//srand(time(0));
	std::list<int> lst;
	std::vector<int> vec(10);
	
	if (ac != 2)
	{
		std::cout << "give me one number to search\n";
		exit(1);
	}

	for (size_t i = 0; i < 7; i++)
		lst.push_back(((rand() % 800) + 100));
	for (size_t i = 0; i < vec.size(); i++)
		vec[i] = (rand() % 800) + 100;

	testcase(lst, atoi(av[1]));
	testcase(vec, atoi(av[1]));
	return (0);
}