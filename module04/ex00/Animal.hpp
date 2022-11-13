/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:04:27 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:04:27 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <iostream>

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

class Animal {
public:
	Animal();
	Animal(const Animal &x);
	Animal &operator=(const Animal &x);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType(void) const;

protected:
	std::string type;
};


#endif