/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:23:21 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:23:31 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string	*panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	memoryLeak();
}
