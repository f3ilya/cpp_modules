/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:36 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:36 by snakita          ###   ########.fr       */
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

private:
	int	fix;
	static const int constint;
};

std::ostream &operator << (std::ostream &out, const Fixed &x);

#endif
