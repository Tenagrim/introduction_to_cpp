/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:53 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:54 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ISpaceMarine.hpp"
#include "INumerated.hpp"
class TacticalMarine : public ISpaceMarine
{
private:
	int num;
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(const TacticalMarine &ref);
	TacticalMarine &operator=(const TacticalMarine &ref);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
	void			applySolider(ISpaceMarine *cadet);

	void			sayNum() const;
	void			setNum(const int);
};
