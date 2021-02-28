/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:49:28 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:49:30 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure &ref) : AMateria(ref)
{}

Cure	&Cure::operator=(const Cure &ref)
{
	(void)ref;
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*res = new Cure();
	return (res);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals "<< target.getName() <<"`s wounds *\n";
	AMateria::use(target);
}
