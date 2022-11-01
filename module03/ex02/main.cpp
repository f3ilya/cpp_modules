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
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ScavTrap mark("Mark");
	FragTrap jake("Jake");

	std::cout << std::endl;
	jake.highFivesGuys();
	bob.attack(mark.getName());
	mark.takeDamage(5);
	mark.beRepaired(5);
	mark.attack(jake.getName());
	jake.takeDamage(20);
	jake.beRepaired(20);
	jake.attack(bob.getName());
	bob.takeDamage(30);
	bob.beRepaired(30);
	mark.guardGate();
	std::cout << std::endl;
	return 0;
}
