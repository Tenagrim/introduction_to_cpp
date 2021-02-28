/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:08 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:10:10 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer::Sorcerer(const Sorcerer &ref)
{
	this->name = ref.name;
	this->title = ref.title;
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born\n";
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &ref)
{
	this->name = ref.name;
	return (*this);
}

std::string	Sorcerer::getName() const
{
	return (name);
}


std::string	Sorcerer::getTitle() const
{
	return (title);
}

std::ostream	&operator<<(std::ostream &os, const Sorcerer &ref)
{
	os << "I am " << ref.getName() << ", " << ref.getTitle();
	os << ", and I like ponies!" << std::endl;
	return (os);
}

void			Sorcerer::polymorph(const Victim &target)
{
	target.getPolymorphed();
}
