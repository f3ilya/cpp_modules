/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:31:22 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:31:22 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &x);
	ClapTrap &operator=(const ClapTrap &x);
	~ClapTrap();

	std::string getName(void) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
};


#endif
