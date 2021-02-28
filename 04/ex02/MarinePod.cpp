/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MarinePod.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:21 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:22 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MarinePod.hpp"

MarinePod::MarinePod()
{
	marine = 0;
	next = 0;
}

MarinePod::MarinePod(ISpaceMarine *marine)
{
	next = 0;
	this->marine = marine;
}

MarinePod::~MarinePod()
{
	if (marine != 0)
		delete (marine);
}

MarinePod::MarinePod(const MarinePod &ref)
{
	this->next = 0;
	this->marine = ref.marine->clone();
}

MarinePod	&MarinePod::operator=(const MarinePod &ref)
{
	this->next = 0;
	this->marine = ref.marine->clone();
	return (*this);
}

MarinePod	*MarinePod::getNext() const
{
	return (next);
}

ISpaceMarine *MarinePod::getMarine() const
{
	return (marine);
}

MarinePod	*MarinePod::clone() const
{
	MarinePod	*res = new MarinePod();
	res->marine = this->marine->clone();
	res->next = 0; 
	return (res);
}

void	MarinePod::pushBack(MarinePod *pod)
{
	MarinePod *p;
	p = this;
	while (p->next != 0)
		p = p->next;
	p->next = pod;
}