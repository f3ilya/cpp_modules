/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:04:48 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:04:48 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << GREEN"Animal default constructor called"END << std::endl;
	type = "animal";
}

Animal::Animal(const Animal &x)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = x;
}

Animal &Animal::operator=(const Animal &x)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	type = x.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << RED"Animal destructor called"END << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal can make sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
