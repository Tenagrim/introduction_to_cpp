#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(0));
	std::cout << "============================\n";
	{
		FragTrap trap("SPR4-3R");
		trap.meleeAttack("Spitter Skag");
		trap.rangedAttack("Badass Elemental Rakk");

		trap.takeDamage(60);
		trap.takeDamage(60);
		trap.takeDamage(60);

		trap.beRepaired(60);
		trap.beRepaired(60);
		trap.beRepaired(60);

		trap.vaulthunter_dot_exe("Jack");
		trap.vaulthunter_dot_exe("General Knoxx");
		trap.vaulthunter_dot_exe("The Devastator");
	}
	std::cout << "============================\n";
	{
		ScavTrap trap("Trashcan");
		trap.meleeAttack("Spitter Skag");
		trap.rangedAttack("Badass Elemental Rakk");

		trap.takeDamage(60);
		trap.takeDamage(60);
		trap.takeDamage(60);

		trap.beRepaired(60);
		trap.beRepaired(60);
		trap.beRepaired(60);
		
		trap.challengeNewcomer("VaultHunter65");
	}
	std::cout << "============================\n";
}
