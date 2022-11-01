/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:43:58 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 18:43:58 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << name << ": constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap " << this->name << ": constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &x) : ClapTrap(x)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = x;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &x)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	name = x.name;
	hit_points = x.hit_points;
	energy_points = x.energy_points;
	attack_damage = x.attack_damage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << ": destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hit_points <= 0)
	{
		hit_points = 0;
		std::cout << "ScavTrap " << name << " can't attack because it has no hit points!" << std::endl;
		return;
	}
	if (energy_points <= 0)
	{
		energy_points = 0;
		std::cout << "ScavTrap " << name << " can't attack because it has no energy points!" << std::endl;
		return;
	}
	energy_points--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage
			  << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << ": is now in Gate keeper mode!" << std::endl;
}
