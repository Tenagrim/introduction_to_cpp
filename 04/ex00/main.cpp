#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Orc.hpp"

int main()
{
	std::cout << "=====================\n";
	{
		Sorcerer robert("Robert", "the Magnificent");

		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;

		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "=====================\n";
	{
		Sorcerer	robert("Robert", "the Magnificent");

		Victim		jim("Jimmy");
		Peon		joe("Joe");
		Orc			nggar("Nggar");

		std::cout << robert << jim << joe << nggar;

		robert.polymorph(jim);
		robert.polymorph(joe);
		robert.polymorph(nggar);

	}
	std::cout << "=====================\n";
	return 0;
}