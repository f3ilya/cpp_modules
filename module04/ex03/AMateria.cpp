/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:57:53 by snakita           #+#    #+#             */
/*   Updated: 2022/11/13 17:57:53 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("nontype") {}

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::AMateria(const AMateria &x)
{
	*this = x;
}

AMateria &AMateria::operator=(const AMateria &x)
{
	if (&x == this)
		return *this;
	type = x.type;
	return *this;
}

AMateria::~AMateria() {}

const std::string &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "Materia unused!" << std::endl;
}
