/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:54 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:54 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_HUMANA_H
#define CPP_HUMANA_H

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void);

private:
	std::string _name;
	Weapon &_weapon;
};


#endif
