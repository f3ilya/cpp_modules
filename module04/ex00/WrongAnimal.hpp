/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:25:55 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:25:55 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP

#include <iostream>

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &x);
	WrongAnimal &operator=(const WrongAnimal &x);
	~WrongAnimal();

	void makeSound() const;
	std::string getType(void) const;

protected:
	std::string type;
};


#endif
