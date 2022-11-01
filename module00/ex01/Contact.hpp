/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:31:52 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:31:52 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickname(std::string str);
		void setPhoneNumber(std::string str);
		void setDarkestSecret(std::string str);
		std::string getFistName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif
