/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:43 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:43 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::boolalpha;
	std::cout << "----------------MY-TEST----------------" << std::endl;

	Fixed d(10.12f);
	Fixed c(10.26f);
	Fixed zero;

	std::cout << "d: " << d << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "Print min number: " << d.min(d, c) << std::endl;
	std::cout << "Print max number: " << d.max(d, c) << std::endl;
	std::cout << "d < c: " << (d < c) << std::endl;
	std::cout << "d <= c: " << (d <= c) << std::endl;
	std::cout << "d > c: " << (d > c) << std::endl;
	std::cout << "d >= c: " << (d >= c) << std::endl;
	std::cout << "d == c: " << (d == c) << std::endl;
	std::cout << "d != c: " << (d != c) << std::endl;
	std::cout << "d + c: " << (d + c) << std::endl;
	std::cout << "c - d: " << (c - d) << std::endl;
	std::cout << "d * c: " << (d * c) << std::endl;
	std::cout << "c / d: " << (c / d) << std::endl;
	std::cout << "d / 0: " << (d / zero) << std::endl;
	return 0;
}
