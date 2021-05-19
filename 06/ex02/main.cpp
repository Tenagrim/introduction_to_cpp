#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

//#define DEBUG

Base	*generate(void)
{
	Base *res;
	int t = rand() % 3;
	if (t == 0)
		res = new A;
	else if (t == 1)
		res = new B;
	else
		res = new C;
	#ifdef DEBUG
		std::cout << "[" << t << "]\n";
	#endif
	return (res);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "Error\n";
}

void identify_from_reference( Base &p)
{
	identify_from_pointer(&p);
}

int main(void)
{
	srand(time(0));
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
}
