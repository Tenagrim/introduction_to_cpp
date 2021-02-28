/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:49:50 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:49:51 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
private:
	unsigned int	_xp;
	std::string		_type;
	AMateria();
public:
	virtual ~AMateria();
	AMateria(const AMateria &ref);
	AMateria(const std::string &type);
	AMateria &operator=(const AMateria &ref);
	const std::string	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

