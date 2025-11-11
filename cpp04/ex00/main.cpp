#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* animal = new Animal();

	std::cout << std::endl;
	std::cout << dog->getType() << " says: ";
	dog->makeSound();

	std::cout << cat->getType() << " says: ";
	cat->makeSound();

	std::cout << animal->getType() << " says: ";
	animal->makeSound();

	std::cout << std::endl;
	delete dog;
	delete cat;
	delete animal;
	return 0;
}
