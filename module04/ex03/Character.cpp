/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:15:06 by snakita           #+#    #+#             */
/*   Updated: 2022/11/13 18:15:06 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("name")
{
	size = 0;
	for (int i = 0; i < 4; i++) {
		array[i] = NULL;
	}
}

Character::Character(std::string name) : name(name)
{
	size = 0;
	for (int i = 0; i < 4; i++) {
		array[i] = NULL;
	}
}

Character::Character(const Character &x)
{
	name = x.name;
	for (int i = 0; i < 4; i++) {
		if (x.array[i])
			array[i] = x.array[i]->clone();
	}
	size = x.size;
}

Character &Character::operator=(const Character &x)
{
	if (&x == this)
		return *this;
	for (int i = 0; i < 4; i++) {
		if (array[i])
			delete array[i];
		if (x.array[i])
			array[i] = x.array[i]->clone();
	}
	name = x.name;
	size = x.size;
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++) {
		if (array[i])
			delete array[i];
	}
}

const std::string &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	if (size < 4) {
		for (int i = 0; i < 4; i++) {
			if (!array[i]) {
				array[i] = m;
				size++;
				return;
			}
		}
	} else
		std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4) {
		if (array[idx])
			array[idx] = NULL;
		else
			std::cout << "Inventory " << idx << " is already empty!" << std::endl;
	} else
		std::cout << "Wrong index to unequip!" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4) {
		if (array[idx])
			array[idx]->use(target);
		else
			std::cout << "There's no materia equipped in inventory " << idx << std::endl;
	} else
		std::cout << "Wrong index to use!" << std::endl;
}
