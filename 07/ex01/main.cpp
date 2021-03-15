/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:41:44 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:41:47 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	print(T one)
{
	std::cout << one << " ";
}

template <typename T>
void	increm(T &one)
{
	one += 1;
}

int main(void)
{
	char	*str = strdup("string");;
	int		arr[] = {1, 2, 3, 6 ,2, 7, 1, 7, 23, 42, 5, 8, 1};
	float	arr2[] = {1.7, 2.3, 3.89, 6.21 ,2.0, 7.2, 1.5};

	iter(str, 7, &print);
	std::cout << "\n";
	iter(str, 7, &increm);
	iter(str, 7, &print);
	std::cout << "\n\n";

	iter(arr, 13, &print);
	std::cout << "\n";
	iter(arr, 13, &increm);
	iter(arr, 13, &print);
	std::cout << "\n\n";

	iter(arr2, 7, &print);
	std::cout << "\n";
	iter(arr2, 7, &increm);
	iter(arr2, 7, &print);
	std::cout << "\n";

}
