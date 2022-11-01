/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:53 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:53 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &p) : x(p.getX()), y(p.getY()) {}

Point &Point::operator=(const Point &p)
{
	if (&p == this)
		return  *this;
	return *this;
}

Point::~Point() {}

const Fixed Point::getX() const
{
	return x;
}

const Fixed Point::getY() const
{
	return y;
}
