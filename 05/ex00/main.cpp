/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:38:13 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:38:19 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main(void)
{
	try
	{
		Bureaucrat hermes("Hermes Conrad", 190);
		std::cout << hermes << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
		Bureaucrat hermes("Hermes Conrad", 149);
		std::cout << hermes << "\n";
		hermes.decrement();
		std::cout << hermes << "\n";
		try
		{
			hermes.decrement();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	return (0);
}
