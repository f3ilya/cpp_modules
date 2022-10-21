#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook Book;
	std::string in;

	while (true)
	{
		std::cout << "Enter the command(ADD/SEARCH/EXIT): ";
		getline(std::cin, in);
		if (in == "ADD")
		{
			std::cout << "--- Add Contact ---" << std::endl;
			if (Book.Add())
				continue;
			std::cout << "--- Contact added ---" << std::endl;
		}
		else if (in == "SEARCH")
			Book.Search();
		else if (in == "EXIT")
		{
			std::cout << "--- Goodbye! ---" << std::endl;
			break;
		}
		else
			std::cout << "Command not found! :(" << std::endl;
	}
	return (0);
}
