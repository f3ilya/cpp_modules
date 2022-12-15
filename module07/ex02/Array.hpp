/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:49:31 by snakita           #+#    #+#             */
/*   Updated: 2022/12/15 20:49:31 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
public:
	Array() : arr(nullptr), n(0), siz(0) {};

	Array(unsigned int n) : siz(n)
	{
		if (siz < 0)
			throw (IndexOfABound());
		this->n = n;
		if (n == 0)
			arr = nullptr;
		else
			arr = new T[n];
	}

	Array(const Array &x)
	{
		this->arr = new T[x.n];
		n = x.n;
		siz = x.siz;
		for (unsigned int i = 0; i < n; i++) {
			arr[i] = x.arr[i];
		}
	}

	Array &operator=(const Array &x)
	{
		if (this == &x) {
			if (arr)
				delete[] arr;
			this->arr = new T[x.n];
			n = x.n;
			siz = x.siz;
			for (unsigned int i = 0; i < n; i++) {
				arr[i] = x.arr[i];
			}
		}
		return *this;
	}

	~Array()
	{
		if (arr)
			delete[] arr;
	}

	int size()
	{
		return n;
	}

	class IndexOfABound : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return "Index of a bound!";
			}
	};

	T &operator[](unsigned int idx)
	{
		if (idx >= n || idx < 0 || arr == nullptr)
			throw (IndexOfABound());
		return arr[idx];
	}

	const T &operator[](unsigned int idx) const
	{
		if (idx >= n || idx < 0 || arr == nullptr)
			throw (IndexOfABound());
		return arr[idx];
	}

private:
	T *arr;
	unsigned int n;
	int siz;
};

#endif
