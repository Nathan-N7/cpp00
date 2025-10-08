#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::setContact(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds) {
    first_name = fn;
    last_name = ln;
    nickname = nm;
    phone_number = pn;
    darkset = ds;
}