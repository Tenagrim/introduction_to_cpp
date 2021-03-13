#include "Data.hpp"
#include <iostream>
int main(void)
{
	srand(time(0));
	void	*raw = serialize();
	Data *data = deserialize(raw);
	std::cout << "=================================\n";
	std::cout << data->s1 << "\n";
	std::cout << data->num << "\n";
	std::cout << data->s2 << "\n";
	std::cout << "=================================\n";
	return (0);
}