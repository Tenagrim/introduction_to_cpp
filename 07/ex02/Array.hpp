/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:41:56 by gshona            #+#    #+#             */
/*   Updated: 2021/03/15 17:41:58 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
template <typename T>
class Array
{
private:
	unsigned int	_size;
	T				*content;
	void			copy(Array<T> const &ref);
public:
	Array();
	Array(unsigned int size);
	~Array();
	Array(const Array &ref);
	Array			&operator=(const Array &ref);
	T				&operator[](const unsigned int index);
	unsigned int	size() const;
};

#include "Array.ipp"
