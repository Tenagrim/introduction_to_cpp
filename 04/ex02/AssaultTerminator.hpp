/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:31 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:33 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ISpaceMarine.hpp"
#include "INumerated.hpp"
class AssaultTerminator : public ISpaceMarine
{
private:
	int num;
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &ref);
	AssaultTerminator &operator=(const AssaultTerminator &ref);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
	
	void			sayNum() const;
	void			setNum(int);
};
