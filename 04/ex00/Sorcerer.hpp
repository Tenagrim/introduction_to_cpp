/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:20 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:10:21 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"
class Sorcerer
{
private:
	std::string		name;
	std::string		title;
	Sorcerer();
public:
	~Sorcerer();
	Sorcerer(const Sorcerer &ref);
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer		&operator=(const Sorcerer &ref);
	std::string		getName() const;
	std::string		getTitle() const;
	void			polymorph(const Victim &);
};

std::ostream		&operator<<(std::ostream &os, const Sorcerer &ref);
