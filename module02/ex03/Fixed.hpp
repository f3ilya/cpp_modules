/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:49 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:49 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &x);
	Fixed &operator = (const Fixed &x);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator<(const Fixed &x) const;
	bool operator>(const Fixed &x) const;
	bool operator<=(const Fixed &x) const;
	bool operator>=(const Fixed &x) const;
	bool operator==(const Fixed &x) const;
	bool operator!=(const Fixed &x) const;

	Fixed operator+(const Fixed &x) const;
	Fixed operator-(const Fixed &x) const;
	Fixed operator*(const Fixed &x) const;
	Fixed operator/(const Fixed &x) const;

	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &x, Fixed &y);
	static const Fixed &min(const Fixed &x, const Fixed &y);
	static Fixed &max(Fixed &x, Fixed &y);
	static const Fixed &max(const Fixed &x, const Fixed &y);

private:
	int	fix;
	static const int constint;
};

std::ostream &operator << (std::ostream &out, const Fixed &x);

#endif
