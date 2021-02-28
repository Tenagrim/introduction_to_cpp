/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   INumerated.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:16:37 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:16:39 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
class INumerated
{
public:
	virtual void			sayNum() const = 0;
	virtual void			setNum(const int) = 0;
};
