

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {};

int	PhoneBook::Add()
{
	static int i = -1;
	std::string in;

	i = i < 7 ? i + 1 : 0;

	std::cout << "Enter FirstName: ";
	std::getline(std::cin, in);
	if (in.empty())
	{
		std::cout << "Empty line: FirstName!" << std::endl;
		return 1;
	}
	contacts[i].setFirstName(in);

	std::cout << "Enter LastName: ";
	std::getline(std::cin, in);
	if (in.empty())
	{
		std::cout << "Empty line: LastName!" << std::endl;
		return 1;
	}
	contacts[i].setLastName(in);

	std::cout << "Enter NickName: ";
	std::getline(std::cin, in);
	if (in.empty())
	{
		std::cout << "Empty line: NickName!" << std::endl;
		return 1;
	}
	contacts[i].setNickname(in);

	std::cout << "Enter PhoneNumber: ";
	std::getline(std::cin, in);
	if (in.empty())
	{
		std::cout << "Empty line: PhoneNumber!" << std::endl;
		return 1;
	}
	contacts[i].setPhoneNumber(in);

	std::cout << "Enter DarkestSecret: ";
	std::getline(std::cin, in);
	if (in.empty())
	{
		std::cout << "Empty line: DarkestSecret!" << std::endl;
		return 1;
	}
	contacts[i].setDarkestSecret(in);
	return 0;
}

void PhoneBook::Search()
{
	int index;
	int size = 0;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  Index   |FirstName | LastName | NickName |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::string FirstName = contacts[i].getFistName();
		if (FirstName.empty())
			break;
		std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";

		std::string NewFirstName = FirstName.length() > 10 ? FirstName.substr(0, 9) + "." : FirstName;
		std::cout << std::right << std::setw(10) << NewFirstName << "|";

		std::string LastName = contacts[i].getLastName();
		std::string NewLastName = LastName.length() > 10 ? LastName.substr(0, 9) + "." : LastName;
		std::cout << std::right << std::setw(10) << NewLastName << "|";

		std::string NickName = contacts[i].getNickName();
		std::string NewNickName = NickName.length() > 10 ? NickName.substr(0,9) + "." : NickName;
		std::cout << std::right << std::setw(10) << NewNickName << "|" << std::endl;
		size++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter Index: ";
	if (!(std::cin >> index) || index < 1 || index > size)
	{
		std::cin.clear();
		std::cout << "Invalid Index!" << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "Index: " << index-- << std::endl;
		std::cout << "FirstName: " << contacts[index].getFistName() << std::endl;
		std::cout << "LastName: " << contacts[index].getLastName() << std::endl;
		std::cout << "NickName: " << contacts[index].getNickName() << std::endl;
		std::cout << "PhoneNumber: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "DarkestSecret: " << contacts[index].getDarkestSecret() << std::endl;
	}
	std::cin.ignore(100, '\n');
}
