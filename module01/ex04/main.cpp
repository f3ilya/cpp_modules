/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:06 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:06 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>
#include <string>

int	error(std::string message)
{
	std::cout << message << std::endl;
	return (1);
}

void ft_replace(std::string *s, std::string s1, std::string s2)
{
	size_t pos;

	while (1)
	{
		pos = s->find(s1);
		if (pos == std::string::npos)
			break;
		s->erase(pos, s1.length());
		s->insert(pos, s2);
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string fileName = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		if (s1.empty() || s2.empty())
			return error("Is empty line s1 or s2!");
		std::ifstream fileIn(fileName);
		if (!fileIn)
			return error("Error opening file!");
		std::ofstream fileOut(fileName.append(".replace"));
		if (!fileOut)
			return error("Error opening fileOut!");
		std::string s;
		while (!(fileIn.eof()))
		{
			getline(fileIn, s);
			if(s1 != s2)
				ft_replace(&s, s1, s2);
			fileOut << s;
			if (!(fileIn.eof()))
				fileOut << std::endl;
		}
		fileIn.close();
		fileOut.close();
	}
	else
		return error("Wrong count of program arguments!");
	return 0;
}
