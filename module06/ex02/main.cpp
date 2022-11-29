/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 00:33:28 by snakita           #+#    #+#             */
/*   Updated: 2022/11/30 00:33:28 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand(time(0));
	int i = rand() % 3;
	if (i == 0) {
		A *a = new A;
		return a;
	} else if (i == 1) {
		B *b = new B;
		return b;
	} else {
		C *c = new C;
		return c;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type!" << std::endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (std::bad_cast) {
		std::cout << "Unknown type!" << std::endl;
	}
}

int main()
{
	std::cout << "------POINTER------" << std::endl;
	Base *ptr;
	ptr = generate();
	identify(ptr);

	std::cout << "-----REFERENCE-----" << std::endl;
	Base &ref = *ptr;
	identify(ref);
	return 0;
}
