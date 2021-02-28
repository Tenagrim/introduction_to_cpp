/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:45:43 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:45:46 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**https://youtu.be/oqpx7L5ipbw
**
**				/	FragTrap	\
**	ClapTrap						SuperTrap
**				\	NinjaTrap	/
*/
#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(const SuperTrap &ref);
	SuperTrap(const std::string &name);
	~SuperTrap(void);
	SuperTrap &operator=(const SuperTrap &ref);
	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
};
#endif

