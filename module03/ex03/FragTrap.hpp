/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:20:34 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 19:20:34 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &x);
	FragTrap &operator=(const FragTrap &x);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys(void);
};


#endif
