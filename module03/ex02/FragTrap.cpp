/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:21:17 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 19:21:17 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap " << this->name << ": constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &x) : ClapTrap(x)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = x;
}

FragTrap &FragTrap::operator=(const FragTrap &x)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	name = x.name;
	hit_points = x.hit_points;
	energy_points = x.energy_points;
	attack_damage = x.attack_damage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << ": destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (hit_points <= 0) {
		hit_points = 0;
		std::cout << "FragTrap " << name << " can't attack because it has no hit points!" << std::endl;
		return;
	}
	if (energy_points <= 0) {
		energy_points = 0;
		std::cout << "FragTrap " << name << " can't attack because it has no energy points!" << std::endl;
		return;
	}
	energy_points--;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage
			  << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << ": high fives guys!" << std::endl;
}
