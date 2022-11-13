/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:15:53 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:15:53 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << GREEN"Dog default constructor called"END << std::endl;
	type = "dog";
}

Dog::Dog(const Dog &x)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = x;
}

Dog &Dog::operator=(const Dog &x)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	type = x.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << RED"Dog destructor called"END << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof! Woof!" << std::endl;
}
