#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
class ScavTrap
{
private:
	int			hit_points;
	int			max_hit_points;
	int			energy_points;
	int			max_energy_points;
	int			level;
	std::string	name;
	int			melee_attack_damage;
	int			ranged_attack_damage;
	int			armor_damage_reduction;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &ref);
	~ScavTrap();
	ScavTrap	&operator=(const ScavTrap &ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(const std::string &target);
};



#endif
