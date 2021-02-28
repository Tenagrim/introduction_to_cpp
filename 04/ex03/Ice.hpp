/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:50:08 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:50:09 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
class Ice : public AMateria
{
private:
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &ref);
	Ice			&operator=(const Ice &ref);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};

