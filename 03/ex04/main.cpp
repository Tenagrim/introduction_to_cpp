/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:45:32 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:45:33 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
int main(void)
{
	SuperTrap	trap("Badass Claptrap");
	FragTrap	enemyFrag("Fraggy");
	ScavTrap	enemyScav("Scavvy");
	SuperTrap	*nggar = new SuperTrap("Nggar");
	trap.takeDamage(60);
	trap.beRepaired(100);
	trap.meleeAttack("Vilhelm");
	trap.rangedAttack("Warrior");
	trap.vaulthunter_dot_exe("Warrior");
	trap.ninjaShoebox(enemyFrag);
	trap.ninjaShoebox(enemyScav);
	std::cout << "{\n";
	delete (nggar);
	std::cout << "}\n";
}
