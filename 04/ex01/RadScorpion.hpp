/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:15:06 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:15:07 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"
class RadScorpion : public Enemy
{
private:
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion &ref);
	RadScorpion	&operator=(const RadScorpion &ref);
	void		takeDamage(int amount);
};

