/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:53:37 by snakita           #+#    #+#             */
/*   Updated: 2022/12/15 21:53:37 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <array>

template <typename T>

bool easyfind(T &cont, int to_find)
{
	typename T::iterator i;

	i = std::find(cont.begin(), cont.end(), to_find);
	if (i == cont.end())
		return (false);
	else
		return (true);
}

#endif
