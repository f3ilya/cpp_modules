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

int main()
{
	try {
		std::cout << std::boolalpha;
		ShrubberyCreationForm form1("Shrubbery");
		std::cout << form1;

		RobotomyRequestForm form2("Robotomy");
		std::cout << form2;

		PresidentialPardonForm form3("Presidential");
		std::cout << form3;

		Bureaucrat president("President", 1);
		std::cout << president;

		std::cout << std::endl;
		form1.beSigned(president);
		president.signForm(form1);
		president.executeForm(form1);

		std::cout << std::endl;
		form2.beSigned(president);
		president.signForm(form2);
		president.executeForm(form2);

		std::cout << std::endl;
		form3.beSigned(president);
		president.signForm(form3);
		president.executeForm(form3);
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	std::cout << "---------------------------------TEST-----------------------------------------" << std::endl;
	Bureaucrat president("Vladimir", 71);
	std::cout << president;

	ShrubberyCreationForm form1("home");
	std::cout << form1;

	RobotomyRequestForm form2("robot");
	std::cout << form2;

	PresidentialPardonForm form3("pardon");
	std::cout << form3;

	try
	{
		std::cout << "----------test1(NOT SIGNED)----------" << std::endl;
		president.signForm(form1);
		president.executeForm(form1);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	try
	{
		std::cout << "----------test2(sign(YES) and exec(NO))----------" << std::endl;
		form2.beSigned(president);
		president.signForm(form2);
		president.executeForm(form2);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	return 0;
}
