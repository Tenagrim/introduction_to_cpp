/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:28:46 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:28:47 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>
class Weapon
{
private:
    std::string type;
public:
    const std::string   &getType();
    void                setType(std::string type);
    Weapon(std::string type);
    Weapon();
    ~Weapon();
};
#endif

