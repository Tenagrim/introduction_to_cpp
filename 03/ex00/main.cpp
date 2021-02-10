#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	trap("SPR4-3R");
	srand(10);
	trap.meleeAttack("Spitter Skag");
	trap.rangedAttack("Badass Elemental Rakk");

	trap.takeDamage(60);
	trap.takeDamage(60);

	trap.beRepaired(60);
	trap.beRepaired(60);

	trap.vaulthunter_dot_exe("Jack");
	trap.vaulthunter_dot_exe("General Knoxx");
	trap.vaulthunter_dot_exe("the Devastator");
}