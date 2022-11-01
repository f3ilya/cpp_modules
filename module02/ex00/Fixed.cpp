/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:29 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:29 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

const int Fixed::constint = 8;

Fixed::Fixed() : fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &x)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = x;
}

Fixed &Fixed::operator=(const Fixed &x)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&x != this)
		fix = x.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fix;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fix = raw;
}
