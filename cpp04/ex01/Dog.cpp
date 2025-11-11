#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog created." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copied." << std::endl;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assigned." << std::endl;
	if (this != &other) {
		this->type = other.type;
		*brain = *other.brain;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destroyed." << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {
	std::cout << "Woof! 🐶" << std::endl;
}

Brain* Dog::getBrain() const {
	return this->brain;
}
