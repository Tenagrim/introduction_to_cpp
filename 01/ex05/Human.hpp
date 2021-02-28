/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:27:06 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:27:08 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"
class Human
{
private:
    Brain   brain;
public:
    std::string identify();
    Brain&  getBrain();
    Human(/* args */);
    ~Human();
};
#endif

