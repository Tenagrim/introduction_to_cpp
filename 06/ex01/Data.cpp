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
	int size = sizeof(std::string) * 2 + sizeof(int);
	#ifdef DEBUG
		std::cout << "size: " << size <<"\n";
		std::cout << s1 << "\n";
		std::cout << num << "\n";
		std::cout << s2 << "\n";
	#endif
	char *serialized = new char[size];
	(reinterpret_cast<std::string**>(serialized)[0]) = new std::string(s1);
	(reinterpret_cast<std::string**>(serialized + sizeof(std::string*) + sizeof(int))[0]) = new std::string(s2);
	*(reinterpret_cast<int*>(serialized + sizeof(std::string*))) = num;
	return (reinterpret_cast<void*>(serialized));
}

Data	*deserialize(void *raw)
{
	char *serialized = reinterpret_cast<char*>(raw);
	Data	*data = new Data;
	data->num = *(reinterpret_cast<int*>(serialized + sizeof(char*)));
	data->s1 = *(reinterpret_cast<std::string**>(serialized)[0]);
	data->s2 = *(reinterpret_cast<std::string**>(serialized + sizeof(int) + sizeof(char*))[0]);
	return (data);
}