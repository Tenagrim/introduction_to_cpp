//#define DEBUG
#include "Data.hpp"
#ifdef DEBUG
# include <iostream>
#endif
void	*serialize()
{
	static char al[9][6] = {"one__", "_two_", "three", "_four", "five_", "_six_", "SEVEN", "EIGHT", "NINE_"};
	int num = rand() % 1000;
	char *s1 = al[rand() % 9];
	char *s2 = al[rand() % 9];
	#ifdef DEBUG
		std::cout << s1 << "\n";
		std::cout << num << "\n";
		std::cout << s2 << "\n";
	#endif
	char *serialized = new char[sizeof(char*) * 2 + sizeof(int)];
	(reinterpret_cast<char**>(serialized)[0]) = s1;
	(reinterpret_cast<char**>(serialized + sizeof(char*) + sizeof(int))[0]) = s2;
	*(reinterpret_cast<int*>(serialized + sizeof(char*))) = num;
	return (reinterpret_cast<void*>(serialized));
}

Data	*deserialize(void *raw)
{
	char *serialized = reinterpret_cast<char*>(raw);
	Data	*data = new Data;
	data->num = *(reinterpret_cast<int*>(serialized + sizeof(char*)));
	data->s1 = std::string(reinterpret_cast<char**>(serialized)[0]);
	data->s2 = std::string(reinterpret_cast<char**>(serialized + sizeof(int) + sizeof(char*))[0]);
	return (data);
}