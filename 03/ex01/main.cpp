/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:40:41 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:40:43 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
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
}
