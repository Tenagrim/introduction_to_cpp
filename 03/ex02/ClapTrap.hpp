/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:41:33 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:41:35 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap
{
protected:
	int			hit_points;
	int			max_hit_points;
	int			energy_points;
	int			max_energy_points;
	int			level;
	std::string	name;
	std::string	type;
	int			melee_attack_damage;
	int			ranged_attack_damage;
	int			armor_damage_reduction;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &ref);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap &ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};
#endif
