/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:20:19 by snakita           #+#    #+#             */
/*   Updated: 2022/12/15 20:20:19 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, int size, void (*f)(const T &x))
{
	for (int i = 0; i < size; i++) {
		(*f)(arr[i]);
	}
}

template<typename T>
void print(const T &x)
{
	std::cout << x << std::endl;
}

#endif
