/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:24:34 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:24:36 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde     *horde;

    std::cout << "==========\n";
    horde = new ZombieHorde(20);
    horde->announce();
    delete (horde);
    std::cout << "==========\n";
    //horde = new ZombieHorde(0);
    //horde->announce();
    //delete (horde);
    std::cout << "==========\n";
}
