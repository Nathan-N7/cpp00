#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const int SIZE = 4;
	const Animal* animals[SIZE];

	for (int i = 0; i < SIZE; i++) {
		if (i < SIZE / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- Making sounds ---" << std::endl;
	for (int i = 0; i < SIZE; i++)
		animals[i]->makeSound();

	std::cout << "\n--- Deleting animals ---" << std::endl;
	for (int i = 0; i < SIZE; i++)
		delete animals[i];

	std::cout << "\n--- Deep copy test ---" << std::endl;
	Dog dog1;
	dog1.getBrain()->setIdea(0, "Chase the cat");
	Dog dog2 = dog1; // copy constructor

	std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

	dog2.getBrain()->setIdea(0, "Eat a bone");

	std::cout << "After change:" << std::endl;
	std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

	return 0;
}
