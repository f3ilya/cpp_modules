/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:54 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:54 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_POINT_HPP
#define CPP_POINT_HPP

#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &p);
	Point &operator=(const Point &p);
	~Point();

	Fixed const getX(void) const;
	Fixed const getY(void) const;

private:
	Fixed const x;
	Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
