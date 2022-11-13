/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:16:02 by snakita           #+#    #+#             */
/*   Updated: 2022/11/13 18:16:02 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	size = 0;
	for (int i = 0; i < 4; i++) {
		array[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &x)
{
	for (int i = 0; i < 4; i++) {
		if (x.array[i])
			array[i] = x.array[i]->clone();
	}
	size = x.size;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &x)
{
	if (&x == this)
		return *this;
	for (int i = 0; i < 4; i++) {
		if (array[i])
			delete array[i];
		if (x.array[i])
			array[i] = x.array[i]->clone();
	}
	size = x.size;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		if (array[i])
			delete array[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
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
		std::cout << "Can't learn more materias!" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++) {
		if (array[i] && array[i]->getType() == type)
			return array[i]->clone();
	}
	return NULL;
}
