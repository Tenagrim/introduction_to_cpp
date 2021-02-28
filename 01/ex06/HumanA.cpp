/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:28:14 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:28:21 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << "\n";
}
