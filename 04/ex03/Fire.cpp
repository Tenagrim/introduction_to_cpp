/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:49:31 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:49:33 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fire.hpp"

Fire::Fire() : AMateria("fire")
{}

Fire::~Fire()
{}

Fire::Fire(const Fire &ref) : AMateria(ref)
{}

Fire	&Fire::operator=(const Fire &ref)
{
	(void)ref;
	return (*this);
}

AMateria	*Fire::clone() const
{
	AMateria	*res = new Fire();
	return (res);
}

void		Fire::use(ICharacter &target)
{
	std::cout << "* burns " << target.getName() << " *\n";
	AMateria::use(target);
}
