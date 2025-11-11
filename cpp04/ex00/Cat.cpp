#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat created." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat copied." << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat assigned." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! 🐱" << std::endl;
}
