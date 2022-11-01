/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:46 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:46 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setName(std::string new_name);

	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
