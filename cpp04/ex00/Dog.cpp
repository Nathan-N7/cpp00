#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog created." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copied." << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assigned." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! 🐶" << std::endl;
}
