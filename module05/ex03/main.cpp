/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:05:34 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 21:05:34 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::boolalpha;

	Intern someRandomIntern;
	Form* ppf;
	Form* rrf;
	Form* scf;
	Form* error;
	try {
		ppf = someRandomIntern.makeForm("presidential pardon", "Anna");
		std::cout << *ppf << std::endl;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;

		scf = someRandomIntern.makeForm("shrubbery creation", "Vlad");
		std::cout << *scf << std::endl;

		error = someRandomIntern.makeForm("error", "Error");
		std::cout << *error;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	return 0;
}
