/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:39:29 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:47:36 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DEBUG

#include "FragTrap.hpp"
FragTrap::FragTrap() : hit_points(100), max_hit_points(100),
energy_points(100), max_energy_points(100),
 level(1), name("CL4P-TP"),melee_attack_damage(30),ranged_attack_damage(20),
armor_damage_reduction(5)
{
	std::cout << "] Initializing...\n";
}

FragTrap::FragTrap(const std::string name) : hit_points(100), max_hit_points(100),
energy_points(100), max_energy_points(100),
 level(1), name("CL4P-TP"),melee_attack_damage(30),ranged_attack_damage(20),
armor_damage_reduction(5)
{
	std::cout << "] Greetings, Traveler! I am "<< name <<".\n\
	But you may call me by my locally designated name, \"" << "Claptrap" <<
	"\". \
	Before continuing, please accept this ECHO communication device\n\
	and heads-up display, provided free of charge, by the Dahl Corporation.\n";
	this->name = name;
}

FragTrap::~FragTrap()
{
	std::string quotes[] = {"Fragmentated", "This was a reeeally bad idea!",
	"Brrh... So cold... brrh...", "My assets... frozen!",
	"I can't feel my fingers! Gah! I don't have any fingers!"};
	std::cout <<"] " << quotes[rand()% 5] << "\n";
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "Copy constructor called for "<< name <<"\n";
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

FragTrap &FragTrap::operator=(const FragTrap&ref)
{
	std::cout << "Assignation operator called for "<< name <<"\n";
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

void FragTrap::meleeAttack(const std::string &target)
{
	std::string		quotes[] = {"Hyah!", "Heyyah!", "Take that!", "Bop!",
	"I'm gonna put my Pain ito your soul!!"};
	std::cout << "] " << quotes[rand() % 5] << "\n";
	std::cout << "FR4G-TP " << name << " bumps " << target <<
	", causing " << melee_attack_damage << " points of damage\n"; 
}

void FragTrap::rangedAttack(const std::string &target)
{
	std::string		quotes[] = {"I am a tornado of death and bullets!",
	"Throwing grenade!", "Hot potato!", "Eat bomb, baddie!", "Bad guy go boom!",
	"Step right up, to the Bulletnator 9000!", "Ha ha ha! Fall before your robot overlord!",
	"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!"};
	std::cout << "] " << quotes[rand() % 8] << "\n";
	std::cout << "FR4G-TP " << name << " attacks " << target <<
	" at range, causing " << ranged_attack_damage << " points of damage\n"; 
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::string		quotes[] = {"My robotic flesh! AAHH!\n",
	"I AM ON FIRE!!! OH GOD, PUT ME OUT!!!\n",
	"Ow hohoho, that hurts! Yipes!\n",
	"If only my chassis... weren't made of recycled human body parts! Wahahaha!\n",
	"Why do I even feel pain?!\n",
	"That looks like it hurts!\n",
	"Extra ouch!\n", "Woah! Oh! Jeez!\n"};
	if (hit_points == 0)
	{
		std::cout << "] Come oon I'm already killed! Leave me alone plz!\n";
		return ;
	}
	amount = ((int)amount < armor_damage_reduction) ? 0 : amount - armor_damage_reduction;
	#ifdef DEBUG
	std::cout << "max: " << max_hit_points << "\nhp: " << hit_points << "\n";
	#endif
	amount = (hit_points - (int)amount < 0) ? hit_points : amount; 
	std::cout << "FR4P-TP " << name << " takes " << amount << " point"
	<< ((amount == 1) ? "" : "s") << " of damage\n";
	if (amount == 0)
	{
		std::cout << "No damage! Fall before your robot overlord! Ha ha ha!\n"; 
		return;
	}
	std::cout<< "] " << quotes[rand() % 8];
	hit_points -= amount;
	if (hit_points == 0)
		std::cout << "FR4G-TP " << name << " was disassembled\n";
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
		return;
	#ifdef DEBUG
	std::cout << "max: " << max_hit_points << "\nhp: " << hit_points << "\n";
	#endif

	if (hit_points + (int)amount > max_hit_points)
		amount = (max_hit_points - hit_points);
	std::cout << "FR4G-TP was repaired with " << amount << " hit point";
	if ( amount != 1)
		std::cout << "s";
	std::cout << "!\n";
	hit_points += amount;
	if (amount == 0)
		std::cout << "] That wasn't so necessary. But slill.. Thank you...\n";
	else if (hit_points == max_hit_points)
		std::cout << "] I'm " << name << " and i am alive again!\n";
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string	quotes[] = {"Defragmenting!", "Recompiling my combat code!",
	"Running the sequencer!", "Loading combat packages!", "Resequencing combat protocols!",
	"Let's get this party started!", "Step right up to the sequence of Trapping!"};
	std::string attacks[] = {"combat protocols", "glitchy weirdness", "combat packages",
	"Bulletnator 9000", "rubber ducky", "MeAt BycYCLe"};
	if (energy_points < 25)
	{
		std::cout << "I'm " << name << " and i am out of energy!\n";
		return;
	}
	energy_points -= 25;
	std::cout << "] " << quotes[rand() % 7] << "\n";
	std::cout << "FR4G-TP " << name << " activating his " << attacks[rand() % 6] << " on " << target
	<< "\n"; 
}
