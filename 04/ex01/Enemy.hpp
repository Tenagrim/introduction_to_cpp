/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:14:57 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:14:58 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
class Enemy
{
protected:
	int			hit_points;
	std::string	type;	
	Enemy();
public:
	virtual ~Enemy();
	Enemy(const Enemy &ref);
	Enemy(int hp, const std::string &type);
	Enemy			&operator=(const Enemy &ref); 
	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int amount);
};
std::ostream		&operator<<(std::ostream &os, const Enemy&ref);
