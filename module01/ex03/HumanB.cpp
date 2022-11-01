/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:55 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:55 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
