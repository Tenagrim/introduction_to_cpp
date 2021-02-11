#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : type("CL4P-TP")
{
	std::cout << "] Initializing as Claptrap\n";
	name = "Unnamed claptrap";
	hit_points = 100;
	max_hit_points = 100;
	level = 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "] Disassemblig Claptrap's core\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap&ref)
{
	std::cout << "Assignation operator called for <CL4P-TP> "<< name <<"\n";
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

ClapTrap::ClapTrap(const ClapTrap&ref)
{
	std::cout << "Copy constructor called for <CL4P-TP> "<< name <<"\n";
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

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << type <<" " << name << " attacks " << target <<
	", causing " << melee_attack_damage << " points of damage\n"; 
}

void	ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << type <<" " << name << " attacks " << target <<
	" at range, causing " << ranged_attack_damage << " points of damage\n"; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	//std::cout << "health: " << hit_points << "\n";
	amount -= armor_damage_reduction;
	amount = (amount < 0) ? 0 : amount;
	amount = (hit_points - (int)amount < 0) ? hit_points : amount; 
	std::cout << type << " " << name << " takes " << amount << " point"
	<< ((amount == 1) ? "" : "s") << " of damage\n";
	if (amount == 0)
	{
		std::cout << "No damage! Fall before your robot overlord! Ha ha ha!\n"; 
		return;
	}
	hit_points -= amount;
	if (hit_points <= 0)
	{
		std::cout << type << " " << name << " was disassembled\n";
		hit_points = 0;
	}
	//std::cout << "health: " << hit_points << "\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
		return;
	if (hit_points + (int)amount > max_hit_points)
		amount = (max_hit_points - hit_points);
	std::cout << type <<" was repaired with " << amount << " hit point";
	if ( amount != 1)
		std::cout << "s";
	std::cout << "!\n";
	hit_points += amount;
	if (hit_points == max_hit_points)
		std::cout << "] I'm " << name << " and i am alive again!\n";
}

std::string	ClapTrap::getType(void)
{
	return (type);
}

std::string	ClapTrap::getName(void)
{
	return (name);
}