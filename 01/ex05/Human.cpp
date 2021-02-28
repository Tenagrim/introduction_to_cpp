/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:26:54 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:26:57 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
Human::Human(/* args */)
{
}

Human::~Human()
{
}

std::string     Human::identify()
{
    std::stringstream ss;
    ss << this;
    return (ss.str());
}


Brain&  Human::getBrain()
{
   return (brain); 
}
