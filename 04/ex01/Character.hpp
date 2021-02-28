/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:14:52 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:14:54 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"
#include "Enemy.hpp"
class Character
{
private:
	int			action_points;
	int			max_action_points;
	AWeapon		*weapon;
	std::string	name;
	Character();
public:
	~Character();
	Character(const Character &ref);
	Character(const std::string &name);
	Character	&operator=(const Character &ref);
	void		equip(AWeapon	*weapon);
	void		attack(Enemy *enemy);
	std::string	getName() const;
	int			getAP() const;
	const AWeapon		*getWeapon() const;
	bool		isArmed() const;
	void		recoverAP();
};

std::ostream		&operator<<(std::ostream &os, const Character &ref);
