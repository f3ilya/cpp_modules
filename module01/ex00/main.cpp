/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:32 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:32 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie Def;
	Zombie Stack("StackZombie");
	Zombie *Heap = newZombie("HeapZombie");

	Def.announce();
	Stack.announce();
	Heap->announce();
	randomChump("RandomZombie");

	delete Heap;
	return (0);
}
