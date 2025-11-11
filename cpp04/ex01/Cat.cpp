#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat created." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat copied." << std::endl;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat assigned." << std::endl;
	if (this != &other) {
		this->type = other.type;
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destroyed." << std::endl;
	delete this->brain;
}

void Cat::makeSound() const {
	std::cout << "Meow! 🐱" << std::endl;
}

Brain* Cat::getBrain() const {
	return this->brain;
}
