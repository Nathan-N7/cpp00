#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::setContact()
{
	std::cout << "first name: ";
	std::getline(std::cin, first_name);
	std::cout << "last name: ";
	std::getline(std::cin, last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "phone number: ";
	std::getline (std::cin, phone_number);
	std::cout << "darkset: ";
	std::getline(std::cin, darkset);
}