#include "main.h"
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main() {
	std::string option;
	Contact contato;
	while (1) {
		std::getline(std::cin, option);
		if (option == "ADD") {
			contato.setContact();
		}
		else if (option == "SEARCH") {

		}
		else if (option == "EXIT") {
			break;
		}
	}
	return (0);
}