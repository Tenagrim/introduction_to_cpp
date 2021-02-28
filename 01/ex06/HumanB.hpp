/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:28:37 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:28:38 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
private:
    Weapon      *weapon;
    std::string name;
public:
    HumanB(std::string name);
    void        setWeapon(Weapon &weapon);
    void        attack();
    ~HumanB();
};
#endif
