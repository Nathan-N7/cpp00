#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main() {
	std::string option;
	PhoneBook agenda;
	while (1) {
		std::getline(std::cin, option);
		if (option == "ADD") {
			agenda.addContact();
		}
		else if (option == "SEARCH") {

		}
		else if (option == "EXIT") {
			break;
		}
	}
	return (0);
}