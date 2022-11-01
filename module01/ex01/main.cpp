/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:42 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:42 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N;

	N = 10;
	horde = zombieHorde(N, "zombieHorde");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
