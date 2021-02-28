/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:19:26 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:19:29 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony    pony;
    pony.SetName("Pinky Pie");
    pony.GetOlder();
    pony.GetOlder();
    pony.GetStronger();
    pony.GetOlder();
    pony.GetStronger();
    pony.GetStronger();
    pony.GetOlder();
    pony.GetOlder();
    pony.GetOlder();
}

void    ponyOnTheHeap()
{
    Pony    *pony;
    pony = new Pony();
    pony->SetName("LittleJack");
    pony->GetOlder();
    pony->GetOlder();
    pony->GetStronger();
    pony->GetOlder();
    pony->GetStronger();
    pony->GetStronger();
    pony->GetOlder();
    pony->GetOlder();
    pony->GetOlder();
    pony->GetStronger();
    pony->GetStronger();
    pony->GetOlder();
    delete pony;
}

int main(void)
{
    std::cout << "=====================\n";
    ponyOnTheHeap();
    std::cout << "=====================\n";
    ponyOnTheStack();
    std::cout << "=====================\n";
}
