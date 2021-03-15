/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:40:44 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:40:47 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
int main (int ac, char **av)
{
	if(ac != 2)
	{	
		std::cout << "give me one value\n";
		return (1);
	}
	try
	{
		Converter conv(av[1]);
		std::cout << conv << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return(0);
}
