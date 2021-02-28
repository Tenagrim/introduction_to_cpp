/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:43 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:45 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISpaceMarine.hpp"
class ISquad
{
public:
	virtual ~ISquad(){}
	virtual int				getCount() const = 0;
	virtual ISpaceMarine	*getUnit(int) const = 0;
	virtual int				push(ISpaceMarine *) = 0;
};
