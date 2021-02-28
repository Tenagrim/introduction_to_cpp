/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:40 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:41 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "INumerated.hpp"
class ISpaceMarine : public INumerated
{
public:
	virtual ~ISpaceMarine(){}
	virtual ISpaceMarine	*clone() const = 0;
	virtual void			battleCry() const = 0;
	virtual void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;

};
