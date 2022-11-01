/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:44:10 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 18:44:10 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main(int argc, char **argv)
{
	if (argc== 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; j < (int) strlen(argv[i]); ++j)
			{
				std::cout << (char)(std::toupper(argv[i][j]));
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
