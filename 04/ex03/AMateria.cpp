/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:49:18 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:49:20 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria()
{
	_xp = 0;
}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &ref)
{
	_xp = ref._xp;
	_type = ref._type;
}

AMateria::AMateria(const std::string &type)
{
	_xp = 0;
	_type = type;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

AMateria	&AMateria::operator=(const AMateria &ref)
{
	_xp = ref._xp;
	_type = ref._type;
	return (*this);
}

std::string const	&AMateria::getType()const
{
	return (_type);
}

unsigned int		AMateria::getXP() const
{
	return (_xp);
}
