/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:14:31 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:14:32 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &ref) : AWeapon(ref)
{}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &ref)
{
	this->name = ref.name;
	this->apcost = ref.apcost;
	this->damage = ref.damage;
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
