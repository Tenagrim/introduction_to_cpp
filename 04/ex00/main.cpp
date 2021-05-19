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
		Orc			*nggar = new Orc("Nggar");

		std::cout << robert << jim << joe << *nggar;

		robert.polymorph(jim);
		robert.polymorph(joe);
		robert.polymorph(*nggar);
		std::cout << "{\n";
		delete (nggar);
		std::cout << "}\n";
	}
	std::cout << "=====================\n";
	return 0;
}
