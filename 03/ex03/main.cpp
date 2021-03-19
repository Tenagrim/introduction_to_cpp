/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:42:43 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:42:45 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	ScavTrap	enemyScav("Tincan");
	FragTrap	enemyFrag("Grappler");
	NinjaTrap	enemyNinja("Scrumbler");

	std::cout << "==============\n";
	NinjaTrap	ghost("Zero");
	std::cout << "==============\n";
	ghost.ninjaShoebox(enemyFrag);
	ghost.ninjaShoebox(enemyNinja);
	ghost.ninjaShoebox(enemyScav);
	ghost.ninjaShoebox(enemyScav);
	ghost.ninjaShoebox(enemyScav);
	std::cout << "==============\n";
	ghost.takeDamage(20);
	ghost.takeDamage(100);
	ghost.takeDamage(100);
	ghost.beRepaired(100);
	ghost.beRepaired(100);
	ghost.meleeAttack("Dr. Zed");
	std::cout << "==============\n";
}
