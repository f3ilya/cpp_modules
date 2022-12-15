/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:54:17 by snakita           #+#    #+#             */
/*   Updated: 2022/12/15 21:54:17 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cmath>

class Span
{
	private:
		unsigned int N;
		std::vector<int> arr;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &x);
		Span &operator=(const Span &x);
		~Span();

		unsigned int getN() const;
		std::vector<int> getArr() const;

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();

		class SpanFull : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NoSpan : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

#endif
