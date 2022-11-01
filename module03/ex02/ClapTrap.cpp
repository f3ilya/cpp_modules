/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:49:44 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 18:49:44 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "no_name";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap " << name << ": default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap " << this->name << ": constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &x)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = x;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &x)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	name = x.name;
	hit_points = x.hit_points;
	energy_points = x.energy_points;
	attack_damage = x.attack_damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << ": destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
	return name;
}

void ClapTrap::attack(const std::string &target)
{
	if (hit_points <= 0)
	{
		hit_points = 0;
		std::cout << "ClapTrap " << name << " can't attack because it has no hit points!" << std::endl;
		return;
	}
	if (energy_points <= 0)
	{
		energy_points = 0;
		std::cout << "ClapTrap " << name << " can't attack because it has no energy points!" << std::endl;
		return;
	}
	energy_points--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage
				<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
	{
		hit_points = 0;
		std::cout << "ClapTrap " << name << " can't take damage because is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " lost " << amount << " hit points!" << std::endl;
	hit_points -= amount;
	if (hit_points < 0)
		hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0)
	{
		hit_points = 0;
		std::cout << "ClapTrap " << name << " can't take damage because is already dead!" << std::endl;
		return ;
	}
	if (energy_points <= 0)
	{
		energy_points = 0;
		std::cout << "ClapTrap " << name << " can't attack because it has no energy points!" << std::endl;
		return ;
	}
	energy_points--;
	std::cout << "ClapTrap " << name << " repaired by " << amount << " points!" << std::endl;
	hit_points += amount;
}
