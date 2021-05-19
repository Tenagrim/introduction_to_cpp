#include "ScavTrap.hpp"
//#define DEBUG
ScavTrap::ScavTrap(std::string name) : hit_points(100), max_hit_points(100),
energy_points(50), max_energy_points(50),
 level(1), name("SC4V-TP"), melee_attack_damage(20),ranged_attack_damage(15),
armor_damage_reduction(3)
{
	this->name = name;
	std::cout <<"] Greetings, traveller..\n";
}

ScavTrap::ScavTrap() : hit_points(100), max_hit_points(100),
energy_points(50), max_energy_points(50), 
 level(1), name("SC4V-TP"), melee_attack_damage(20),ranged_attack_damage(15),
armor_damage_reduction(3) 
{
	std::cout << "] Awakening...\n";
}

ScavTrap::ScavTrap(const ScavTrap &ref) : hit_points(ref.hit_points),
max_hit_points(ref.max_hit_points),
energy_points(ref.energy_points), max_energy_points(ref.max_energy_points), 
level(ref.level), name(ref.name), melee_attack_damage(ref.melee_attack_damage),
ranged_attack_damage(ref.ranged_attack_damage), armor_damage_reduction(ref.armor_damage_reduction) 
{
	std::cout << "] Awakening as a copy of "<< name << "...\n";
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
	" at safety range, causing " << ranged_attack_damage << " points of damage\n"; 
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "] Please, don't kill me another time\n";
		return ;
	}
	amount = ((int)amount < armor_damage_reduction) ? 0 : amount - armor_damage_reduction;
	amount = (hit_points - (int)amount < 0) ? hit_points : amount; 
	#ifdef DEBUG
	std::cout << "max: " << max_hit_points << "\nhp: " << hit_points << "\n";
	#endif
	std::cout << "SC4V-TP " << name << " takes " << amount << " point"
	<< ((amount == 1) ? "" : "s") << " of damage\n";
	if (amount == 0)
	{
		std::cout << "The enemy attack was dodged\n"; 
		return;
	}
	std::cout<< "] " << "Getting more damage\n";
	hit_points -= amount;
	if (hit_points <= 0)
	{
		hit_points = 0;
		std::cout << "SC4V-TP " << name << " was splitted to parts\n";
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
		return;
	if (hit_points + (int)amount > max_hit_points)
		amount = (max_hit_points - hit_points);
	std::cout << "SC4V-TP was repaired with " << amount << " hit point";
	if ( amount != 1)
		std::cout << "s";
	std::cout << "!\n";
	hit_points += amount;
	if (amount == 0)
		std::cout << "] You can,t overrep me. That,s an another game\n";
	else if (hit_points == max_hit_points)
		std::cout << "] Full repaired again\n";
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
