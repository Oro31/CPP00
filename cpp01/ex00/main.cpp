#include "Zombie.h"

int	main(void) {
	Zombie	zom("zomzom");
	zom.announce();
	Zombie	*tam;
	tam = newZombie("tamtam");
	(*tam).announce();
	zom.announce();
	randomChump("oumoum");
	zom.announce();
	(*tam).announce();
	delete tam;
	std::cout << "last zombie will be destroyed at the end of the program\n";
	return 0;
}
