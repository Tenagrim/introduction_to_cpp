/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:50:13 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:50:16 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MateriaList.hpp"
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
private:
	MateriaList		learned;
	AMateria		*findLearned(std::string const &type);
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &ref);
	MateriaSource	&operator=(const MateriaSource &ref); 
	void			learnMateria(AMateria *);
	AMateria		*createMateria(std::string const &type);
};
