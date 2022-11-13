/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:29:53 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:29:53 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << GREEN"WrongCat default constructor called"END << std::endl;
	type = "wrong cat";
}

WrongCat::WrongCat(const WrongCat &x)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = x;
}

WrongCat &WrongCat::operator=(const WrongCat &x)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	type = x.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << RED"WrongCat destructor called"END << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow.. Meow.. Meow.." << std::endl;
}
