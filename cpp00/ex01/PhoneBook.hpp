#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook {
	private:
		Contact contacts[8];
		int		index;
		int		count;
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif