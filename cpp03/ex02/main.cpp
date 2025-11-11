#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "--- Creating FragTrap Tom ---" << std::endl;
	FragTrap tom("Tom");

	tom.attack("Enemy");
	tom.takeDamage(40);
	tom.beRepaired(25);
	tom.highFivesGuys();

	std::cout << "\n--- Creating ScavTrap Bob ---" << std::endl;
	ScavTrap bob("Bob");
	bob.guardGate();

	std::cout << "\n--- Copy test ---" << std::endl;
	FragTrap copy = tom;

	std::cout << "\n--- Destruction order ---" << std::endl;
	return 0;
}
