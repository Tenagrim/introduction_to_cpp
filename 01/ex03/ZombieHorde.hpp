/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:24:41 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:24:43 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include <string>
#include "Zombie.hpp"
class ZombieHorde
{
private:
    int             size;
    Zombie         *population;
    std::string     randName();
    std::string     randType();
public:
    void            announce();
    ZombieHorde(int N);
    ~ZombieHorde();
};
#endif
