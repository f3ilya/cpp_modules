/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:20:27 by snakita           #+#    #+#             */
/*   Updated: 2022/12/15 20:20:27 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "------INT------" << std::endl;
	int array_int[] = {1, 2, 3, 4, 5};
	int size_int = sizeof(array_int) / sizeof(array_int[0]);
	iter(array_int, size_int, print);

	std::cout << "-----FLOAT-----" << std::endl;
	float array_float[] = {1.32f, 4.43f, 53.12f};
	int size_float = sizeof(array_float) / sizeof(array_float[0]);
	iter(array_float, size_float, print);

	std::cout << "-----STRING----" << std::endl;
	std::string array_string[] = {"lol", "hi", "batman"};
	int size_string = sizeof(array_string) / sizeof(array_string[0]);
	iter(array_string, size_string, print);

	std::cout << "------CHAR-----" << std::endl;
	char array_char[] = {'a', 'b', 'c', 'd'};
	int size_char = sizeof(array_char) / sizeof(array_char[0]);
	iter(array_char, size_char, print);

	return 0;
}
