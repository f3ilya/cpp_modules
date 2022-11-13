/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:18:51 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:18:51 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat &x);
	Cat &operator=(const Cat &x);
	~Cat();

	void makeSound() const;
};


#endif
