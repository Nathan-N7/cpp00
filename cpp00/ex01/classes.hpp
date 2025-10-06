#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int phone_number;
		std::string darkset;
};

class PhoneBook {
	public:
		std::string contacts[8];
};

#endif