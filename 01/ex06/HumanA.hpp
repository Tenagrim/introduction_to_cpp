/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:28:33 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:28:34 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA
{
private:
    Weapon      &weapon;
    std::string name;
public:
    void        attack();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
};



#endif
