#include "SuperTrap.hpp"
int main(void)
{
	std::cout << "=================\n";
	SuperTrap	trap("Badass Claptrap");
	std::cout << "=================\n";
	FragTrap	enemyFrag("Fraggy");
	std::cout << "=================\n";
	ScavTrap	enemyScav("Scavvy");
	std::cout << "=================\n";
	SuperTrap	*nggar = new SuperTrap("Nggar");
	std::cout << "=================\n";
	trap.takeDamage(60);
	trap.beRepaired(100);
	std::cout << "=================\n";
	trap.meleeAttack("Vilhelm");
	trap.rangedAttack("Warrior");
	std::cout << "=================\n";
	trap.vaulthunter_dot_exe("Warrior");
	trap.ninjaShoebox(enemyFrag);
	trap.ninjaShoebox(enemyScav);
	std::cout << "=================\n";
	std::cout << "{\n";
	delete (nggar);
	std::cout << "}\n";
	std::cout << "=================\n";
}
