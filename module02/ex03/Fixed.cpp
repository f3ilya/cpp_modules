/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:48 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:48 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

const int Fixed::constint = 8;

Fixed::Fixed() : fix(0) {}

Fixed::Fixed(const int number)
{
	fix = number << constint;
}

Fixed::Fixed(const float number)
{
	fix = (int)roundf(number * (1 << constint));
}

Fixed::Fixed(const Fixed &x)
{
	*this = x;
}

Fixed &Fixed::operator=(const Fixed &x)
{
	if (&x != this)
		fix = x.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

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

bool Fixed::operator<(const Fixed &x) const
{
	return fix < x.getRawBits();
}

bool Fixed::operator>(const Fixed &x) const
{
	return fix > x.getRawBits();
}

bool Fixed::operator<=(const Fixed &x) const
{
	return fix <= x.getRawBits();
}

bool Fixed::operator>=(const Fixed &x) const
{
	return fix >= x.getRawBits();
}

bool Fixed::operator==(const Fixed &x) const
{
	return fix == x.getRawBits();
}

bool Fixed::operator!=(const Fixed &x) const
{
	return fix != x.getRawBits();
}

Fixed Fixed::operator+(const Fixed &x) const
{
	Fixed ret(toFloat() + x.toFloat());
	return ret;
}

Fixed Fixed::operator-(const Fixed &x) const
{
	Fixed ret(toFloat() - x.toFloat());
	return ret;
}

Fixed Fixed::operator*(const Fixed &x) const
{
	Fixed ret(toFloat() * x.toFloat());
	return ret;
}

Fixed Fixed::operator/(const Fixed &x) const
{
	if (!x.getRawBits())
	{
		std::cout << "Error: division by ";
		return 0;
	}
	Fixed ret(toFloat() / x.toFloat());
	return ret;
}

Fixed &Fixed::operator++()
{
	fix++;
	return *this;
}

Fixed &Fixed::operator--()
{
	fix--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	fix++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	fix--;
	return tmp;
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	if (x.getRawBits() < y.getRawBits())
		return x;
	return y;
}

const Fixed &Fixed::min(const Fixed &x, const Fixed &y)
{
	if (x.getRawBits() < y.getRawBits())
		return x;
	return y;
}

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	if (x.getRawBits() > y.getRawBits())
		return x;
	return y;
}

const Fixed &Fixed::max(const Fixed &x, const Fixed &y)
{
	if (x.getRawBits() > y.getRawBits())
		return x;
	return y;
}
