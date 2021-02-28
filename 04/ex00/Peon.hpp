/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:18 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:10:19 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CPP
#define PEON_CPP
#include "Victim.hpp"
class Peon : public Victim
{
private:
	Peon();
public:
	virtual ~Peon();
	Peon(const Peon &ref);
	Peon(const std::string &name);
	Peon		&operator=(const Peon &ref); 
	void		getPolymorphed() const;
};
#endif
