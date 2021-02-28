/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:50 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:52 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISquad.hpp"
#include <iostream>
#include "MarineList.hpp"
class Squad : public ISquad
{
private:
	int			count;
	void		copy(const Squad &ref);
	void		clearUnits();
	bool		inSquad(ISpaceMarine *);
	MarineList	units;
public:
	Squad();
	~Squad();
	Squad(const Squad &ref);
	Squad &operator=(const Squad &ref);
	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *);
	int size()const;
	void numerate() const;
};
