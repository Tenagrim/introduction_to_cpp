/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:23 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:10:25 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
class Victim
{
protected:
	std::string name;
	Victim();

public:
	virtual ~Victim();
	Victim(const Victim &ref);
	Victim(const std::string &name);
	Victim				&operator=(const Victim &ref);
	std::string			getName() const;
	virtual void		getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Victim &ref);
