/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minigun.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:14:59 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:15:00 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"
#include <iostream>
class Minigun : public AWeapon
{
private:
public:
	Minigun();
	virtual ~Minigun();
	Minigun(const Minigun &ref);
	Minigun &operator=(const Minigun &ref);
	void		attack() const; 
};
