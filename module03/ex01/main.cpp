/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:01:26 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 19:01:26 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ScavTrap mark("Mark");

	std::cout << std::endl;
	bob.attack(mark.getName());
	mark.takeDamage(5);
	mark.beRepaired(5);
	mark.attack(bob.getName());
	bob.takeDamage(20);
	bob.beRepaired(10);
	mark.guardGate();
	std::cout << std::endl;
	return 0;
}
