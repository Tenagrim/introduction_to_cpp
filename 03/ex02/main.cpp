/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:41:29 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:41:32 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "============================\n";
	{
		FragTrap trap("SPR4-3R");
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
	std::cout << "============================\n";
	{
		ScavTrap trap("Trashcan");
		trap.meleeAttack("Spitter Skag");
		trap.rangedAttack("Badass Elemental Rakk");

		trap.takeDamage(60);
		trap.takeDamage(60);

		trap.beRepaired(60);
		trap.beRepaired(60);
		trap.challengeNewcomer("VaultHunter65");
	}
	std::cout << "============================\n";
}
