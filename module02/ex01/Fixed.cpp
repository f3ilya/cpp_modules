/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:35 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:35 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

const int Fixed::constint = 8;

Fixed::Fixed() : fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	fix = number << constint;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	fix = (int)roundf(number * (1 << constint));
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
	return fix;
}

void Fixed::setRawBits(const int raw)
{
	fix = raw;
}

float Fixed::toFloat(void) const
{
	return (float)(fix / (float)(1 << constint));
}

int Fixed::toInt(void) const
{
	return (int)(fix >> constint);
}

std::ostream &operator << (std::ostream &out, const Fixed &x)
{
	out << x.toFloat();
	return out;
}
