#include "main.h"
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::setContact()
{
	while (first_name.empty()) {
		std::cout << "first name: ";
		std::getline(std::cin, first_name);
	}
	while (last_name.empty()) {
		std::cout << "last name: ";
		std::getline(std::cin, last_name);
	}
	while(nickname.empty()) {
		std::cout << "nickname: ";
		std::getline(std::cin, nickname);
	}
	while (phone_number.empty()) {
		std::cout << "phone number: ";
		std::getline (std::cin, phone_number);
	}
	while (darkset.empty()) {
		std::cout << "darkset: ";
		std::getline(std::cin, darkset);
	}
}