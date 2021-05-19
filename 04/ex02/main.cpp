#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
int main(void)
{
	std::cout << "=======\n";
	{
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;

		ISquad *vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		std::cout << "===\n";
		for (int i = 0; i < vlc->getCount(); i++)
		{
			ISpaceMarine *cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << "=======\n";
	{
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;	

		Squad *vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		Squad *vcc = new Squad(*vlc);

		bob->setNum(1);
		jim->setNum(2);

		vcc->getUnit(0)->setNum(3);
		vcc->getUnit(1)->setNum(4);

		vlc->getUnit(1)->sayNum();
		vlc->getUnit(0)->sayNum();
		vcc->getUnit(1)->sayNum();
		vcc->getUnit(0)->sayNum();
		
		vlc->push(jim);
		vlc->push(jim);
		vlc->push(jim);

		std::cout << "Count: " << vlc->size() << "\n";
		std::cout << "Count: " << vlc->getCount() << "\n";

		vlc->push(new AssaultTerminator);
		vlc->push(new AssaultTerminator);

		std::cout << "2 Count: " << vlc->size() << "\n";
		
		vlc->numerate();
		delete vlc;
		delete vcc;
	}
	std::cout << "=======\n";
	return 0;
}
