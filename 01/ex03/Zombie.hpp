/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:24:38 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:24:40 by gshona           ###   ########.fr       */
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
    void    setName(std::string name);
    void    setType(std::string type);
    void    announce();
};


#endif
