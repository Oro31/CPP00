#include "Zombie.h"

int	main(void) {
	Zombie	*horde;

	horde = NULL;
	horde = zombieHorde(100, "Moar");
	if (!horde)
		return 0;
	for (int i = 0; i < 100; i++) {
		std::cout << "horde num " << i << std::endl;
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
