/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:28:26 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:28:28 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon()
{
    type = "Hands";
}

Weapon::Weapon(std::string type) : type(type)
{}

Weapon::~Weapon()
{
}

const std::string   &Weapon::getType()
{
    return (type);
}

void                Weapon::setType(std::string type)
{
    this->type = type;
}
