#include "SuperTrap.hpp"
int main(void)
{
	SuperTrap	trap("Badass Claptrap");
	FragTrap	enemyFrag("Fraggy");
	ScavTrap	enemyScav("Scavvy");
	trap.takeDamage(60);
	trap.beRepaired(100);
	trap.meleeAttack("Vilhelm");
	trap.rangedAttack("Warrior");
	trap.vaulthunter_dot_exe("Warrior");
	trap.ninjaShoebox(enemyFrag);
	trap.ninjaShoebox(enemyScav);
}