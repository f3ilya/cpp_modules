/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:59:22 by snakita           #+#    #+#             */
/*   Updated: 2022/11/26 17:59:22 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		std::cout << std::boolalpha;
		Bureaucrat boss("Jack", 1);
		std::cout << boss;

		Form form("Form", 5, 150);
		std::cout << form;
		form.beSigned(boss);
		boss.signForm(form);
		std::cout << form;
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	try {
		std::cout << "\n" << std::endl;

		Bureaucrat jack("Jack", 50);
		std::cout << jack;

		Form form("test_0", 10, 100);
		std::cout << form;
		jack.signForm(form);
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	try {
		std::cout << "\n----------Test 1-------------" << std::endl;

		Form form("test_1", 200, 200);
		std::cout << form;
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	try {
		std::cout << "\n----------Test 2-------------" << std::endl;

		Form form("test_2", 0, 100);
		std::cout << form;
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
}
