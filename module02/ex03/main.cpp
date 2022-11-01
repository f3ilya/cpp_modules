/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:51 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:51 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

int main(void)
{
	Point a(3.0f, 0.0f);
	Point b(0.0f, 0.0f);
	Point c (0.0f, 3.0f);

	Point point_in(1.0f, 1.0f);
	Point point_out(4.0f, 0.5f);
	Point point(1.5f, 1.5f);

	std::cout << std::boolalpha;
	std::cout << "Point belongs to triangle: " << bsp(a, b, c, point_in) << std::endl;
	std::cout << "Point belongs to triangle: " << bsp(a, b, c, point_out) << std::endl;
	std::cout << "Point belongs to triangle: " << bsp(a, b, c, point) << std::endl;
	std::cout << "Point a belongs to triangle: " << bsp(a, b, c, a) << std::endl;
	std::cout << "Point b belongs to triangle: " << bsp(a, b, c, b) << std::endl;
	std::cout << "Point c belongs to triangle: " << bsp(a, b, c, c) << std::endl;
	return 0;
}
