/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MarineList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:46 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:47 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MarinePod.hpp"
#include <stdexcept>
class MarineList
{
private:
	MarinePod	*content;
	void			pushBack(MarinePod *pod);
public:
	MarineList();
	~MarineList();
	MarineList(const MarineList &ref);
	MarineList		&operator=(const MarineList &ref);
	void			pushBack();
	void			clear();
	void			copy(const MarineList &ref);
	MarineList		&clone();
	void			pushBack(ISpaceMarine *cadet);
	ISpaceMarine	*operator[](const int index) const;
	int				size() const;
};
