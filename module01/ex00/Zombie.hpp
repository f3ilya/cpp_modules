/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:40 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:40 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		~Zombie();
		Zombie(std::string new_name);
		void announce(void);

	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
