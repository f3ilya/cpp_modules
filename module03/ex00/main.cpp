/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:43:12 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 18:43:12 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ClapTrap mark("Mark");

	std::cout << std::endl;
	bob.attack(mark.getName());
	mark.takeDamage(5);
	mark.beRepaired(5);
	mark.attack(bob.getName());
	bob.takeDamage(15);
	bob.beRepaired(10);
	std::cout << std::endl;
	return 0;
}
