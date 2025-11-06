#include "Zombie.hpp"

#include "Zombie.hpp"

int main(void) {
	int n = 5;
	Zombie* horde[n];
	int i = 0;
	while (i < n) {
		horde[i] = new Zombie;
		horde[i]->setName("Horder");
		horde[i]->announce();
		i++;
	}
	i = 0;
	while (i < n) {
		delete horde[i];
		i++;
	}
	return (0);
}
