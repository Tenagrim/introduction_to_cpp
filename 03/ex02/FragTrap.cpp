#include "FragTrap.hpp"
FragTrap::FragTrap() : ClapTrap() 
{
	std::cout << "] Initializing as FragTrap...\n";
	max_energy_points = 100;
	energy_points = 100;
	ranged_attack_damage = 20;
	melee_attack_damage = 30;
	armor_damage_reduction = 5;
	type = "FR4G-TP"; 
}

FragTrap::FragTrap(const std::string name) : FragTrap()
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
	std::cout << "Disassembling FR4G-TP core\n";
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "Copy constructor called for <FR4G-TP> "<< name <<"\n";
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
	std::cout << "Assignation operator called for <FR4G-TP> "<< name <<"\n";
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