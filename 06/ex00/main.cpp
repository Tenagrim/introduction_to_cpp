#include "Converter.hpp"
#include <iostream>
int main ()
{
	char str[] = "inff";
	float f = atof(str);
	double d = atof(str);
	std::cout << "[" << f << "]\n";
	std::cout << "[" << d << "]\n";

}