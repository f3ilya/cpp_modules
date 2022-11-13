/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:20:01 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:20:01 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << GREEN"Cat default constructor called"END << std::endl;
	type = "cat";
	brain = new Brain();
}

Cat::Cat(const Cat &x)
{
	std::cout << GREEN"Cat copy constructor called"END << std::endl;
	type = x.type;
	brain = new Brain(*x.brain);
}

Cat &Cat::operator=(const Cat &x)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	type = x.type;
	if (brain)
		delete brain;
	brain = new Brain(*x.brain);
	return *this;
}

Cat::~Cat()
{
	if (brain)
		delete brain;
	std::cout << RED"Cat destructor called"END << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow.. Meow.. Meow.." << std::endl;
}

Brain *Cat::getBrain() const
{
	return brain;
}
