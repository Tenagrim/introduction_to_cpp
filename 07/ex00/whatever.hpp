/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:41:51 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:41:53 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
template <typename T>
T		min(T a, T b)
{
		return ((a < b) ? a : b);
}

template <typename T>
T		max(T a, T b)
{
		return ((a > b) ? a : b);
}

template <typename T>
void	swap(T &a, T &b)
{
	T	c = a;
	a = b;
	b = c; 
}
