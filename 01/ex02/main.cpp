/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:23:56 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:23:59 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent     event;
    Zombie*         singleton;
    
    event.setZombieType("Runner");
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    std::cout << "\n";
    
    event.setZombieType("Bloater");
    event.randomChump();
    event.randomChump();
    
    singleton = event.newZombie("Jeffry");
    singleton->announce();
    delete(singleton);
    
    singleton = event.newZombie("Bill Murray");
    singleton->announce();
    delete(singleton);
    
    event.setZombieType("Clicker");
    std::cout << "\n";
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
}
