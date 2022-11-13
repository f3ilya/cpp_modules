/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:29:01 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 18:29:01 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
//	Animal test;
	{
		Dog dog;

		std::cout << dog.getType() << ": ";
		dog.makeSound();
	}
	{
		Cat cat;

		std::cout << cat.getType() << ": ";
		cat.makeSound();
	}
	return 0;
}
