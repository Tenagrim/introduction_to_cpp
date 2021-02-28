/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:49:22 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 16:49:24 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name)
{
	this->name = name;
	nullSpells();
}

std::string const	&Character::getName() const
{
	return (name);
}

Character::~Character()
{
	clearSpells();
}

Character::Character(const Character &ref)
{
	name = ref.name;
	nullSpells();
	//spells = ref.spells; // <-- ??
}

Character	&Character::operator=(const Character &ref)
{
	name = ref.name;
	return (*this);
}

void	Character::nullSpells()
{
	activeSpells = 0;
	for (size_t i = 0; i < 4; i++)
		spells[i] = nullptr;	
}

bool	Character::isEquipped(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
		if (spells[i] == m)
			return (true);
	return (false);
}

void	Character::equip(AMateria *m)
{
	if (m ==nullptr)
	{
		std::cout << "Nonexistent materia\n";
		return;
	}
	if (activeSpells == 4)
	{
		std::cout << "No more slots for new materia\n";
		return;
	}
	if (isEquipped(m))
	{
		std::cout << "This materia is already equipped\n";
		return;
	}
	spells[activeSpells] = m;
	activeSpells++;
}

void	Character::unequip(int idx)
{
	if (activeSpells == 0)
		return;
	if (idx < 0 || idx > 3)
	{
		std::cout << "No such slot\n";
		return;
	}
	if (spells[idx]== nullptr)
	{
		std::cout << name << "`s slot " << idx << " is already empty\n";
		return;
	}
	activeSpells--;
	spells[idx] = nullptr;
	shift();
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "No such slot\n";
		return;
	}
	if (spells[idx]== nullptr)
	{
		std::cout << name << "`s slot " << idx << " is empty\n";
		return;
	}
	spells[idx]->use(target);
}

void	Character::clearSpells()
{
	for (int i = 0; i < 4; i++)
		if (spells[i] != nullptr)
			delete (spells[i]);
}

void		Character::shift()
{
	bool swapped;
	do
	{
		swapped = false;	
		for (size_t i = 1; i < 4; i++)
		{
			if (spells[i - 1] == nullptr && spells[i] != nullptr)
			{
				swapped = true;
				spells[i - 1] = spells[i];
				spells[i] = nullptr;
			}
		}
	} while (swapped);
}
