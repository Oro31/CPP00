#include "Zombie.h"

Zombie	*newZombie(std::string name) {
	Zombie	*zom;
	zom = new Zombie(name);
	return zom;
}
