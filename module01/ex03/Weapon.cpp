/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:01 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:01 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return (_type);
}
