/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:29:47 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 17:29:47 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat &x);
	WrongCat &operator=(const WrongCat &x);
	~WrongCat();

	void makeSound() const;
};


#endif
