

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
