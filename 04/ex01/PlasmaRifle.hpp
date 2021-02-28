/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:15:01 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:15:02 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"
#include <iostream>
class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &ref);
	PlasmaRifle &operator=(const PlasmaRifle &ref);
	void		attack() const; 
};
