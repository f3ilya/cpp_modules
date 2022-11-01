/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:50:49 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 19:50:49 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	name = "No_name";
	ClapTrap::name = name + "_clap_name";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap " << name << ": default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap " << name << ": constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &x) : ClapTrap(x)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = x;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &x)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	name = x.name;
	hit_points = x.hit_points;
	energy_points = x.energy_points;
	attack_damage = x.attack_damage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << ": destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
