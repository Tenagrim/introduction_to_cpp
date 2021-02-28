/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:42:53 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:42:55 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &ref);
	~ScavTrap();
	ScavTrap	&operator=(const ScavTrap &ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		challengeNewcomer(const std::string &target);
};
#endif
