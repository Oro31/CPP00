#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	c_robert("Robert");

	c_robert.attack("Benji");
	c_robert.takeDamage(2);
	c_robert.beRepaired(2);
	return 0;
}
