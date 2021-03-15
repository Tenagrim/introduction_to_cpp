/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:41:12 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:41:14 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

struct Data
{
	std::string		s1;
	int				num;
	std::string		s2;
};
void	*serialize(void);
Data	*deserialize(void * raw);
