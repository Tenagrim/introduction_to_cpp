/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MarinePod.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:48 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:49 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISpaceMarine.hpp"
class MarinePod
{
private:
	ISpaceMarine	*marine;
	MarinePod		*next;
	MarinePod();
public:
	MarinePod(ISpaceMarine *marine);
	~MarinePod();
	MarinePod(const MarinePod &ref);
	MarinePod	&operator=(const MarinePod &ref);
	MarinePod	*getNext() const;
	MarinePod	*clone() const;
	ISpaceMarine	*getMarine() const;
	void		pushBack(MarinePod *pod);
};
