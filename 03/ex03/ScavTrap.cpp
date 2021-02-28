/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:42:41 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:42:42 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
	std::cout << "] Awakening as ScavTrap...\n";
	max_energy_points = 50;
	energy_points = 50;
	ranged_attack_damage = 15;
	melee_attack_damage = 20;
	armor_damage_reduction = 3;
	type = "SC4V-TP"; 
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "] Awakening as ScavTrap...\n";
	max_energy_points = 50;
	energy_points = 50;
	ranged_attack_damage = 15;
	melee_attack_damage = 20;
	armor_damage_reduction = 3;
	type = "SC4V-TP"; 

	this->name = name;
	std::cout <<"] Greetings, traveller..\n";
}

ScavTrap::ScavTrap(const ScavTrap &ref) 
{
	std::cout << "] Awakening as a copy of <SC4V-TP> "<< name << "...\n";
	name = ref.name;
	hit_points = ref.hit_points;
	max_energy_points = ref.max_energy_points;
	energy_points = ref.energy_points;
	max_hit_points = ref.max_hit_points;
	ranged_attack_damage = ref.ranged_attack_damage;
	melee_attack_damage = ref.melee_attack_damage;
	armor_damage_reduction = ref.armor_damage_reduction;
	level = ref.level;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap&ref)
{
	std::cout << "Assignation operator called for SC4V-TP "<< name <<"\n";
	name = ref.name;
	hit_points = ref.hit_points;
	max_energy_points = ref.max_energy_points;
	energy_points = ref.energy_points;
	max_hit_points = ref.max_hit_points;
	ranged_attack_damage = ref.ranged_attack_damage;
	melee_attack_damage = ref.melee_attack_damage;
	armor_damage_reduction = ref.armor_damage_reduction;
	level = ref.level;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "] I'm not need to be here anymore..\n";
	std::cout << "Disassembling SC4V-TP core\n";
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "] " << "Attack on target" << "\n";
	std::cout << "SC4V-TP " << name << " hits " << target <<
	", causing " << melee_attack_damage << " points of damage\n"; 
}

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "] " << "Get off here!" << "\n";
	std::cout << "SC4V-TP " << name << " offends " << target <<
	" at range, causing " << ranged_attack_damage << " points of damage\n"; 
}

void	ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string	quotes[] = {"collect 139 377 brown rocks",
	"kill Ug-Thak, Lord of Scags", "pilfer lost staff of Mount Schuler",
	"defeat Destroyer of Worlds", "dance, dance, baby"};
	if (energy_points < 25)
	{
		std::cout << "] " << name << " is out of energy!\n";
		return;
	}
	energy_points -= 25;
	std::cout << "SC4V-TP " << name << " challanges " << target << " to "
	<< quotes[rand() % 5] << "\n";
}
