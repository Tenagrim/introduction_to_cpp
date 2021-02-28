/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:27:01 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:27:04 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#include <sstream>
class Brain
{
private:
    float       mass;
    float       effciency;
public:
    void        think();
    std::string identify();
    Brain(/* args */);
    ~Brain();
};
#endif

