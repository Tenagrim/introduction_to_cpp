/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:14:50 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:14:51 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
class AWeapon
{
protected:
	std::string		name;
	int				apcost;
	int				damage;
	AWeapon();
public:
	virtual ~AWeapon();
	AWeapon(const AWeapon &ref);
	AWeapon(const std::string &name, int apcost, int damage);
	std::string			getName() const;
	int					getDamage() const;
	int					getAPCost() const;
	AWeapon				&operator=(const AWeapon &ref);
	virtual void		attack() const = 0;
};


