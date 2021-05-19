#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << "] Initializing as NinjaTrap...\n";
	hit_points = 60;
	max_hit_points = 60;
	max_energy_points = 120;
	energy_points = 120;
	ranged_attack_damage = 5;
	melee_attack_damage = 60;
	armor_damage_reduction = 0;
	type = "NG4-TP"; 
}

NinjaTrap::NinjaTrap(const std::string &name)
{
	std::cout << "] Initializing as NinjaTrap...\n";
	hit_points = 60;
	max_hit_points = 60;
	max_energy_points = 120;
	energy_points = 120;
	ranged_attack_damage = 5;
	melee_attack_damage = 60;
	armor_damage_reduction = 0;
	type = "NG4-TP";

	this->name = name;
	std::cout <<"] Ghosting..\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap&ref) 
{
	std::cout << "] Awakening as a copy of <NG4-TP> "<< name << "...\n";
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

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ref)
{
	std::cout << "Assignation operator called for NG4-TP " << name << "\n";
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "] Disassembling Ninga core\n";
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	if (energy_points < 25)
	{
		std::cout << "] Not enough energy. Back to shadows\n";
		return;
	}
	energy_points -= 25;	
	std::cout << "NG4-TP " << name << " activating his " << "special attack" << " on "
	<< target.getName() << " enemy ClapTrap\n"; 
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	if (energy_points < 25)
	{
		std::cout << "] Not enough energy. Back to shadows\n";
		return;
	}
	energy_points -= 25;	
	std::cout << "NG4-TP " << name << " activating his " << "FragTrapper" << " on "
	<< target.getName() <<" enemy FragTrap\n"; 
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (energy_points < 25)
	{
		std::cout << "] Not enough energy. Back to shadows\n";
		return;
	}
	energy_points -= 25;	
	std::cout << "NG4-TP " << name << " activating his " << "Betrayenator 3000" << " on "
	<<target.getName() << " enemy NinjaTrap\n";
	std::cout << "] Sorry, brother...\n";
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (energy_points < 25)
	{
		std::cout << "] Not enough energy. Back to shadows\n";
		return;
	}
	energy_points -= 25;	
	std::cout << "NG4-TP " << name << " activating his " << "garbage collector" << " on "
	<< target.getName() << " enemy ScavTrap\n";
}

void NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << "] " << "Silence around..." << "\n";
	std::cout << "NG4-TP " << name << " scratchs " << target <<
	" by his katana, causing " << melee_attack_damage << " points of damage\n"; 
}

void NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout << "] " << "Quiet death..." << "\n";
	std::cout << "NG4-TP " << name << " throwing his shurikens to" << target <<
	", causing " << ranged_attack_damage << " points of damage\n"; 
}
