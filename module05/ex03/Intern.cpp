/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:43:09 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 21:43:09 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &x)
{
	*this = x;
}

Intern &Intern::operator=(const Intern &x)
{
	if (this == &x)
		return *this;
	return *this;
}

Intern::~Intern() {}

const char *Intern::FormNotFound::what() const throw()
{
	return "Format not found!";
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i;
	for (i = 0; i < 3; i++)
		if (name == names[i])
			break;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return new PresidentialPardonForm(target);
		case 1:
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			throw Intern::FormNotFound();
	}
}
