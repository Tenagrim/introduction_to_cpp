/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:06 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:10:07 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
Peon::Peon()
{}

Peon::~Peon()
{
	std::cout << "Bleuark....\n";
}

Peon::Peon(const Peon &ref) : Victim(ref)
{}

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog Zog.\n";
}

Peon	&Peon::operator=(const Peon &ref)
{
	this->name = ref.name;
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << name <<" has been turned into a pink pony!\n";
}
