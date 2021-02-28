/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:28:54 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:28:59 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << "\n";
}
