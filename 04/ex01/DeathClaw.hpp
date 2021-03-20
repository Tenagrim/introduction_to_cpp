/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeathClaw.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:14:55 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:14:56 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"
class DeathClaw : public Enemy
{
private:
public:
	DeathClaw();
	virtual ~DeathClaw();
	DeathClaw(const DeathClaw &ref);
	DeathClaw	&operator=(const DeathClaw &ref);
	void		takeDamage(int amount);
};
