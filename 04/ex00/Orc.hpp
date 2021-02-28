/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Orc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:15 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:10:16 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Victim.hpp"
class Orc : public Victim
{
private:
	Orc();
public:
	virtual ~Orc();
	Orc(const std::string &name);
	Orc(const Orc &ref);
	Orc &operator=(const Orc &ref); 
	void		getPolymorphed() const;
};

