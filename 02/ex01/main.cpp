/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:35:36 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:35:41 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main(void)
{
	{
		std::cout << "====== MY TEST PART ======\n";
		Fixed a(10);
		Fixed b(20);
		std::cout << "a: " << a << "\n";
		std::cout << "b: " << b << "\n";
		Fixed c = a + b;
		std::cout << "a + b: " << c << "\n";
		std::cout << "a * b: " << a * b << "\n";
		std::cout << "(a + b) == 30: " << ((a + b) == Fixed(30)) << "\n";
		std::cout << "(a + b) == 31: " << ((a + b) == Fixed(31)) << "\n";
	}
	{
		std::cout << "\n===== SUBJ TEST PART =====\n";
		Fixed a;
		Fixed const b(10);
		Fixed const c(42.42f);
		Fixed const d(b);

		a = Fixed(1234.4321f);

		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	return 0;
}
