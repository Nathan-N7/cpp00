#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
    index = 0;
    count = 0;
}

void    PhoneBook::addContact() {
    std::string first_name, last_name, nickname, phone_number, darkset;
    do {
        std::cout << "firs name: ";
		std::getline(std::cin, first_name);
    } while (first_name.empty() || first_name.find_first_not_of(" \t"));
	do {
        std::cout << "last name: ";
		std::getline(std::cin, last_name);
    } while (last_name.empty() || last_name.find_first_not_of(" \t"));
	do {
        std::cout << "nickname: ";
		std::getline(std::cin, nickname);
    } while(nickname.empty() || nickname.find_first_not_of(" \t"));
	do {
        std::cout << "phone number: ";
		std::getline (std::cin, phone_number);
    } while (phone_number.empty() || phone_number.find_first_not_of(" \t"));
	do {
        std::cout << "darkset: ";
		std::getline(std::cin, darkset);
    } while (darkset.empty() || darkset.find_first_not_of(" \t"));
    contacts[index].setContact(first_name, last_name, nickname, phone_number, darkset);
    index = (index + 1) % 7;
    if (count < 8)
        count++;
}