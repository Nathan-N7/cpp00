#include <iostream>
#include <string>

int	main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* str_ptr = &str;
	std::string& str_ref = str;

	std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR:	" << str_ptr << std::endl;
    std::cout << "Memory address held by stringREF: " << &str_ref << std::endl;
    std::cout << std::endl;
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *str_ptr << std::endl;
    std::cout << "Value pointed to by stringREF: " << str_ref << std::endl;
    return (0);
}