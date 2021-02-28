/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:49:55 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:50:00 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
class Cure : public AMateria
{
private:
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &ref);
	Cure			&operator=(const Cure &ref);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};
