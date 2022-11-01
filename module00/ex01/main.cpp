/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:31:56 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:31:56 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook Book;
	std::string in;

	while (true)
	{
		std::cout << "Enter the command(ADD/SEARCH/EXIT): ";
		getline(std::cin, in);
		if (in == "ADD")
		{
			std::cout << "--- Add Contact ---" << std::endl;
			if (Book.Add())
				continue;
			std::cout << "--- Contact added ---" << std::endl;
		}
		else if (in == "SEARCH")
			Book.Search();
		else if (in == "EXIT")
		{
			std::cout << "--- Goodbye! ---" << std::endl;
			break;
		}
		else
			std::cout << "Command not found! :(" << std::endl;
	}
	return (0);
}
