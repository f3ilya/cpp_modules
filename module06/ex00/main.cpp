/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:48:28 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 23:48:28 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2) {
		Convert convert(argv[1]);
		convert.printChar();
		convert.printInt();
		convert.printFloat();
		convert.printDouble();
	} else
		std::cout << "Wrong count of arguments!" << std::endl;
	return 0;
}
