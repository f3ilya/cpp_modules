/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:32:07 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:32:07 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		int Add();
		void Search();
	private:
		Contact contacts[8];
};


#endif //CPP_PHONEBOOK_HPP
