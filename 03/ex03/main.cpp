#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	ScavTrap	enemyScav("Tincan");
	FragTrap	enemyFrag("Grappler");
	NinjaTrap	enemyNinja("Scrumbler");

	NinjaTrap	ghost("Zero");
	std::cout << "==============\n";
	ghost.ninjaShoebox(enemyFrag);
	ghost.ninjaShoebox(enemyNinja);
	ghost.ninjaShoebox(enemyScav);

	ghost.takeDamage(20);
	ghost.takeDamage(100);
	ghost.beRepaired(100);
	ghost.meleeAttack("Dr. Zed");
}