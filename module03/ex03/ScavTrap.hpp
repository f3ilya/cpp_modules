/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:44:41 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 18:44:41 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &x);
	ScavTrap &operator=(const ScavTrap &x);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};


#endif
