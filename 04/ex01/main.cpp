#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Minigun.hpp"
#include "DeathClaw.hpp"
#include "SuperMutant.hpp"

int main(void)
{
	std::cout << "=========================\n";
	{
		Character *me = new Character("me");

		std::cout << *me;

		Enemy *b = new RadScorpion();

		AWeapon *pr = new PlasmaRifle();
		AWeapon *pf = new PowerFist();

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);

		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		std::cout << "------\n";
		delete (me);
		delete (pr);
		delete (pf);
		std::cout << "------\n";
	}
	std::cout << "=========================\n";
	{
		Character	*me = new Character("me");
		AWeapon		*bfg = new Minigun();
		AWeapon		*pr = new PlasmaRifle();

		Enemy		*claw = new DeathClaw();
		Enemy		*sm = new SuperMutant();

		me->equip(pr);
		std::cout << *me;
		std::cout << *claw;

		me->attack(claw);
		me->attack(claw);
		me->attack(claw);
		me->attack(claw);
		std::cout << *me;
		std::cout << *claw;

		me->attack(claw);
		me->attack(claw);
		me->attack(claw);
		me->attack(claw);
		std::cout << *me;
		std::cout << *claw;

		me->attack(claw);
		me->attack(claw);

		std::cout << "-----\n";
		me->equip(bfg);
		std::cout << *me;
		me->recoverAP();
		std::cout << *me;
		me->recoverAP();
		std::cout << *me;
		me->recoverAP();
		std::cout << *me;
		me->recoverAP();
		std::cout << *me;
		me->recoverAP();
		std::cout << *me;
		std::cout << "-----\n";
		me->attack(claw);
		me->attack(claw);
		me->attack(claw);
		std::cout << *me;
		std::cout << *claw;
		std::cout << "-----\n";
		me->attack(sm);
		me->attack(sm);
		me->attack(sm);
		std::cout << *sm;
		me->recoverAP();
		me->recoverAP();
		me->attack(sm);
		std::cout << *sm;
		me->attack(sm);
		std::cout << *sm;
	}
	std::cout << "=========================\n";
	return (0);
}