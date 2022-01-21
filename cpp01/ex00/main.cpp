#include "Zombie.h"

int	main(void) {
	Zombie	zom("zomzom");
	zom.announce();
	Zombie	*tam;
	tam = newZombie("tamtam");
	(*tam).announce();
	randomChump("oumoum");
	delete tam;
	return 0;
}
