/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:10:38 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 23:10:38 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string str) : str(str) {}

Convert::Convert(const Convert &x)
{
	*this = x;
}

Convert &Convert::operator=(const Convert &x)
{
	if (this != &x)
		str = x.str;
	return *this;
}

Convert::~Convert() {}

void Convert::printChar()
{
	std::cout << "char: ";
	int number = 0;
	if (str.length() == 1) {
		try {
			number = std::stoi(str);
			if (number < 33 || number > 126)
				std::cout << "Non displayable!" << std::endl;
			else {
				char c = static_cast<char>(number);
				std::cout << "'" << c << "'" << std::endl;
			}
		} catch (std::invalid_argument) {
			std::cout << "'" << str[0] << "'" << std::endl;
		} catch (std::out_of_range) {
			std::cout << "impossible" << std::endl;
		}
	} else {
		try {
			number = std::stoi(str);
			if (number < CHAR_MIN || number > CHAR_MAX)
				std::cout << "impossible" << std::endl;
			else if (number < 33 || number > 126)
				std::cout << "Non displayable!" << std::endl;
			else {
				char c = static_cast<char>(number);
				std::cout << "'" << c << "'" << std::endl;
			}
		} catch (std::invalid_argument) {
			std::cout << "impossible" << std::endl;
		} catch (std::out_of_range) {
			std::cout << "impossible" << std::endl;
		}
	}
}

void Convert::printInt()
{
	std::cout << "int: ";
	int number = 0;
	try {
		number = std::stoi(str);
		std::cout << number << std::endl;
	}  catch (std::invalid_argument) {
		std::cout << "impossible" << std::endl;
	} catch (std::out_of_range) {
		std::cout << "impossible" << std::endl;
	}
}

void Convert::printFloat()
{
	std::cout << "float: ";
	float number = 0;
	try {
		number = std::stof(str);
		std::cout << std::fixed << std::setprecision(1) << number << "f" << std::endl;
	}  catch (std::invalid_argument) {
		std::cout << "impossible" << std::endl;
	} catch (std::out_of_range) {
		std::cout << "impossible" << std::endl;
	}
}

void Convert::printDouble()
{
	std::cout << "double: ";
	double number = 0;
	try {
		number = std::stod(str);
		std::cout << std::fixed << std::setprecision(1) << number << std::endl;
	}  catch (std::invalid_argument) {
		std::cout << "impossible" << std::endl;
	} catch (std::out_of_range) {
		std::cout << "impossible" << std::endl;
	}
}
