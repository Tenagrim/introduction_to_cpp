/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:40:54 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:40:56 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
int main(void)
{
	srand(time(0));
	void	*raw = serialize();
	Data *data = deserialize(raw);
	std::cout << "=================================\n";
	std::cout << data->s1 << "\n";
	std::cout << data->num << "\n";
	std::cout << data->s2 << "\n";
	std::cout << "=================================\n";
	return (0);
}
