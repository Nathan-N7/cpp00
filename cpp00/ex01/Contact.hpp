#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>


class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest;
	public:
		void	setContact(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds);
		void	displayfull();
		void	display(int index);
};

#endif