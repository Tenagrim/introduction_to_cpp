/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:45:30 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:45:31 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap()
{
	std::cout << "] Initializing as SUPER TRAP...\n";
	energy_points = 120;
	max_energy_points = 120;
	name = "Unnamed SuperTrap";
	melee_attack_damage = 60;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	type = "SP3R-TP"; 
}

SuperTrap::SuperTrap(const std::string &name)
{
	std::cout << "] Initializing as SUPER TRAP...\n";
	energy_points = 120;
	max_energy_points = 120;
	melee_attack_damage = 60;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	type = "SP3R-TP";
	this->name = name;
}

SuperTrap::SuperTrap(const SuperTrap &ref)
{
	std::cout << "] Awakening as a copy of <SP3R-TP> "<< name << "...\n";
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

SuperTrap::~SuperTrap()
{
	std::cout << "] Disassembling the SUPER CORE\n";
}

SuperTrap &SuperTrap::operator=(const SuperTrap& ref)
{
	std::cout << "Assignation operator called for <SP3R-TP> "<< name <<"\n";
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

void SuperTrap::meleeAttack(const std::string &target)
{
	std::cout << "] " << "Super melee attack" << "\n";
	this->NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target)
{
	std::cout << "] " << "Super ranged attack" << "\n";
	this->FragTrap::rangedAttack(target);
}
