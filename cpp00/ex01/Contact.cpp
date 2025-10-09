#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::setContact(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds) {
    first_name = fn;
    last_name = ln;
    nickname = nm;
    phone_number = pn;
    darkest = ds;
}

std::string transform(std::string str) {
    if (str.length() < 10) {
        while (str.length() < 10)
            str += ' ';
        return (str);
    }
    else if (str.length() > 10) {
        std::string tmp = str.substr(0, 9);
        tmp += '.';
        return (tmp);
    }
    return (str);
}

void    Contact::display(int index) {
    std::cout << "    " << (index + 1) << "     " << "|";
    std::cout << transform(first_name) << "|";
    std::cout << transform(last_name) << "|";
    std::cout << transform(nickname) << "|" << std::endl;
}

void    Contact::displayfull()
{
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone nummber: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest << std::endl;
}