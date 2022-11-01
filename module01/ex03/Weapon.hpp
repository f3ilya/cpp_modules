/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:02 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:02 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_WEAPON_H
#define CPP_WEAPON_H

#include <iostream>
#include <string>

class Weapon {
public:
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	std::string const &getType(void) const;

private:
	std::string _type;
};


#endif
