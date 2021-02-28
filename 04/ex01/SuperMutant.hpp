/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:15:08 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:15:09 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"
class SuperMutant : public Enemy
{
private:
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant &ref);
	SuperMutant	&operator=(const SuperMutant &ref);
	void		takeDamage(int amount);
};
