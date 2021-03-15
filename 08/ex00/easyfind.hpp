/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:42:27 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:42:30 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stdexcept>

template <typename T>
int	*easyFind(T &cont, int find)
{
	typename T::iterator it = cont.begin();
	while(it != cont.end())
	{
		if(*it == find)
			return(&(*it));
		it++;
	}
	throw std::runtime_error("number was not found");
	return(NULL);
}
