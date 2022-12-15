/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:12:42 by snakita           #+#    #+#             */
/*   Updated: 2022/12/15 20:12:42 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WHATEVER_HPP
#define CPP_WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T z = x;
	x = y;
	y = z;
}

template<typename T>
const T &min(const T &x, const T &y)
{
	if (x < y)
		return x;
	else
		return y;
}

template<typename T>
const T &max(const T &x, const T &y)
{
	if (x > y)
		return x;
	else
		return y;
}

#endif
