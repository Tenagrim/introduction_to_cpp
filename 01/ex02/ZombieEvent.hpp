/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:24:03 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:24:06 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP
#include "Zombie.hpp"
#include <string>
class ZombieEvent
{
private:
    std::string type;
public:
    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    void    randomChump();
    ZombieEvent();
    ~ZombieEvent();
};
#endif
