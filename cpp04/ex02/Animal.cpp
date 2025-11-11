#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructed." << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "Animal copied." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destroyed." << std::endl;
}

std::string Animal::getType() const {
	return type;
}
