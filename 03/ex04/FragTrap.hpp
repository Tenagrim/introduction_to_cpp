/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:45:36 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:45:38 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap
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
