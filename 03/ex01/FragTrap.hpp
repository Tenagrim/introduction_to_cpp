/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:40:44 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:40:46 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
class FragTrap
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
	FragTrap();
	FragTrap(const FragTrap &ref);
	FragTrap(const std::string name);
	~FragTrap();
	FragTrap	&operator=(const FragTrap& ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif
