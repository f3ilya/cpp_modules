/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:57 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:57 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_HUMANB_H
#define CPP_HUMANB_H

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon &weapon);

private:
	std::string _name;
	Weapon *_weapon;
};


#endif
