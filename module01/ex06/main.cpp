/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:22 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:22 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl H;

	if (argc != 2)
	{
		std::cout << "Wrong count of program arguments!" << std::endl;
		return 1;
	}
	H.complain(argv[1]);
	return 0;
}
