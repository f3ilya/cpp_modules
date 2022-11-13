/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:25:51 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:25:51 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << GREEN"WrongAnimal default constructor called"END << std::endl;
	type = "wrong animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &x)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = x;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &x)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	type = x.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED"WrongAnimal destructor called"END << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal can make sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
