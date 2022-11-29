/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:13:32 by snakita           #+#    #+#             */
/*   Updated: 2022/11/23 18:13:32 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat boss("Jack", 1);
		std::cout << boss;
		boss.decGrade();
		std::cout << boss;
		boss.incGrade();
		std::cout << boss;
		std::cout << "-------------------------------------------" << std::endl;
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	try {
		std::cout << "Test 0: ";
		Bureaucrat test("Test0", 150);
		test.decGrade();
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	try {
		std::cout << "Test 1: ";
		Bureaucrat test("Test1", 1);
		test.incGrade();
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	try {
		std::cout << "Test 2: grade 151: ";
		Bureaucrat test("Test3", 151);
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	try {
		std::cout << "Test 3: grade 0: ";
		Bureaucrat test("Test4", 0);
	}
	catch (std::exception &x) {
		std::cout << x.what() << std::endl;
	}
	return 0;
}