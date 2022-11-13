/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:00:09 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 18:00:09 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN"Brain default constructor called"END << std::endl;
}

Brain::Brain(const Brain &x)
{
	std::cout << GREEN"Brain copy constructor called"END << std::endl;
	*this = x;
}

Brain &Brain::operator=(const Brain &x)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (&x == this)
		return *this;
	for (int i = 0; i < 100; i++) {
		ideas[i] = x.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << RED"Brain destructor called"END << std::endl;
}

void Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++) {
		if (ideas[i].empty())
		{
			ideas[i] = idea;
			break;
		}
	}
}

void Brain::printIdeas()
{
	for (int i = 0; i < 100; i++) {
		if (ideas[i].empty())
			break;
		std::cout << "Ideas number " << i + 1 << ": " << ideas[i] << std::endl;
	}
}
