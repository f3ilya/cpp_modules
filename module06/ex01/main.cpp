/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 00:01:20 by snakita           #+#    #+#             */
/*   Updated: 2022/11/30 00:01:20 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	std::string str;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data ptr;
	uintptr_t raw;
	Data *test;

	ptr.str = "name";
	std::cout << "----------------VALUE----------------" << std::endl;
	std::cout << "Value: " << ptr.str << " | Address: " << &ptr << std::endl;

	raw = serialize(&ptr);
	std::cout << "--------------SERIALIZE--------------" << std::endl;
	std::cout << "Address(uintptr_t): " << raw << std::endl;

	test = deserialize(raw);
	std::cout << "-------------DESERIALIZE-------------" << std::endl;
	std::cout << "Value: " << test->str << " | Address: " << test << std::endl;
	return 0;
}
