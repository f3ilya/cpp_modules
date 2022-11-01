/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:30 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:30 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &x);
	Fixed &operator = (const Fixed &x);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int	fix;
	static const int constint;
};


#endif
