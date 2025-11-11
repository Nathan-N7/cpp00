#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal created." << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal copied." << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal assigned." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destroyed." << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Generic animal sound..." << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}
