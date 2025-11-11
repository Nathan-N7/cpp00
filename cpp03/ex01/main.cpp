#include "ScavTrap.hpp"

int main() {
	std::cout << "--- Creating ScavTrap Serena ---" << std::endl;
	ScavTrap serena("Serena");

	std::cout << "--- Actions ---" << std::endl;
	serena.attack("Intruder");
	serena.takeDamage(30);
	serena.beRepaired(20);
	serena.guardGate();

	std::cout << "--- Copy test ---" << std::endl;
	ScavTrap copy = serena;

	std::cout << "--- Destruction order ---" << std::endl;
	return 0;
}
