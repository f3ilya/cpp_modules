/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:10:26 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 23:10:26 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Convert {
public:
	Convert(std::string str);
	Convert(const Convert &x);
	Convert &operator=(const Convert &x);
	~Convert();

	void printChar();
	void printInt();
	void printFloat();
	void printDouble();

private:
	std::string str;
};


#endif
