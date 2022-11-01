/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:50 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:50 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Adress string: " << &string << std::endl;
	std::cout << "Adress stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress stringREF: " << &stringREF << std::endl;

	std::cout << "Value string: " << string << std::endl;
	std::cout << "Value stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value stringREF: " << stringREF << std::endl;

	return (0);
}
