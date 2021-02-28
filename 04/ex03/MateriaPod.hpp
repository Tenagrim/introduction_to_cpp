/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaPod.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:50:11 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:50:13 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
class MateriaPod
{
private:
	AMateria		*content;
	MateriaPod		*next;
	MateriaPod();
public:
	MateriaPod(AMateria *content);
	~MateriaPod();
	MateriaPod(const MateriaPod &ref);
	MateriaPod	&operator=(const MateriaPod &ref);
	MateriaPod	*getNext() const;
	MateriaPod	*clone() const;
	AMateria	*getContent() const;
	void		pushBack(MateriaPod *pod);
};
