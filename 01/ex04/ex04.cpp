/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:25:55 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:25:57 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &r = str;

    std::cout << "str:       " << str << "\n";
    std::cout << "pointer:   " << *p << "\n";
    std::cout << "reference: " << r << "\n";
}
