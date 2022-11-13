/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:13:47 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:13:47 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &x);
	Dog &operator=(const Dog &x);
	~Dog();

	void makeSound() const;
};


#endif
