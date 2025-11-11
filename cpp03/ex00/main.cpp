#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Alpha");
	ClapTrap b("Bravo");

	a.attack("Bravo");
	b.takeDamage(3);
	b.beRepaired(2);

	a.attack("Charlie");
	a.takeDamage(5);
	a.beRepaired(4);

	return (0);
}
