#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	c_robert("Robert");
	ScavTrap	s_benji("Benji");

	s_benji.guardGate();
	c_robert.attack("Benji");
	s_benji.takeDamage(c_robert.getDamage());
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	s_benji.beRepaired(10);
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	s_benji.attack("Robert");
	c_robert.takeDamage(s_benji.getDamage());
	std::cout << "Robert has " << c_robert.getHit() << " hit points.\n";
	s_benji.beRepaired(10);
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	c_robert.beRepaired(10);
	std::cout << "Robert has " << c_robert.getHit() << " hit points.\n";
	return 0;
}
