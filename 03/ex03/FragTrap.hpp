/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:42:48 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:42:50 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap &ref);
	FragTrap(const std::string name);
	~FragTrap();
	FragTrap	&operator=(const FragTrap& ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		vaulthunter_dot_exe(std::string const & target);
};

#endif
