/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:15:04 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:15:05 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AWeapon.hpp"
class PowerFist : public AWeapon
{
private:
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(const PowerFist &ref);
	PowerFist	&operator=(const PowerFist &ref);
	void		 attack() const;
};

