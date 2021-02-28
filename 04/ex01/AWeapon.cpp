/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:14:17 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:14:19 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &ref)
{
	this->name = ref.name;
	this->apcost = ref.apcost;
	this->damage = ref.damage;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : name(name), apcost(apcost), damage(damage)
{} 

AWeapon	&AWeapon::operator=(const AWeapon &ref)
{
	this->name = ref.name;
	this->apcost = ref.apcost;
	this->damage = ref.damage;
	return (*this);
}

std::string		AWeapon::getName() const
{
	return (name);
}

int				AWeapon::getAPCost() const
{
	return (apcost);
}

int				AWeapon::getDamage() const
{
	return (damage);
}
