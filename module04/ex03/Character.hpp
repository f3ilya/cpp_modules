/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:14:58 by snakita           #+#    #+#             */
/*   Updated: 2022/11/13 18:14:58 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_CHARACTER_HPP
#define CPP_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character();
	Character(std::string name);
	Character(const Character &x);
	Character &operator=(const Character &x);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string name;
	AMateria *array[4];
	int size;
};


#endif
