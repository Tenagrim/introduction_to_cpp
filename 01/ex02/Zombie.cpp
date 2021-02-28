/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:23:47 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:23:50 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss...\n";
}

Zombie::Zombie()
{
    name = "Unnamed zombie";
    type = "Zero-type zombie";
}

Zombie::Zombie(std::string name, std:: string type)
{
    this->name = name; 
    this->type=type;
}

Zombie::~Zombie()
{
}
