/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:24:00 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:24:02 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
    std::string type;
public:
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie();
    void    announce();
};


#endif
