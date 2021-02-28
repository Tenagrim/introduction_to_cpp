/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:39:36 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:39:38 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
