/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:50:01 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:50:02 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
class Fire : public AMateria
{
private:
public:
	Fire();
	virtual ~Fire();
	Fire(const Fire &ref);
	Fire			&operator=(const Fire &ref);
	AMateria	*clone() const;
	void		use(ICharacter &target);
};
