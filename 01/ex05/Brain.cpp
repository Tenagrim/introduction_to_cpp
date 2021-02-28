/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:26:50 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:26:53 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain(/* args */)
{
    mass = 5;
    effciency = 0.5;
}

Brain::~Brain()
{
}

std::string     Brain::identify()
{
    std::stringstream ss;
    ss << this;
    return (ss.str());
}

void    Brain::think()
{
    std::cout << "Thinking....\n";
}
