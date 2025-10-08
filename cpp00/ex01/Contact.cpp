#include "main.h"
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::setContact()
{
	while (first_name.empty() || first_name.find_first_not_of(" \t")) {
		std::cout << "first name: ";
		std::getline(std::cin, first_name);
	}
	while (last_name.empty() || last_name.find_first_not_of(" \t")) {
		std::cout << "last name: ";
		std::getline(std::cin, last_name);
	}
	while(nickname.empty() || nickname.find_first_not_of(" \t")) {
		std::cout << "nickname: ";
		std::getline(std::cin, nickname);
	}
	while (phone_number.empty() || phone_number.find_first_not_of(" \t")) {
		std::cout << "phone number: ";
		std::getline (std::cin, phone_number);
	}
	while (darkset.empty() || darkset.find_first_not_of(" \t")) {
		std::cout << "darkset: ";
		std::getline(std::cin, darkset);
	}
}