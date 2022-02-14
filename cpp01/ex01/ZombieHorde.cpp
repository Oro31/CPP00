#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*horde;

	horde = new Zombie[N];
	if (!horde)
		return NULL;
	for (int i = 0; i < N; i++) {
		horde[i].getName(name);
	}
	return horde;
}
