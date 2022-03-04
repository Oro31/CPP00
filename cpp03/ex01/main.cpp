#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	c_robert("Robert");
	ScavTrap	s_benji("Benji");

	std::cout << "Robert has " << c_robert.getHit() << " hit points.\n";
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	std::cout << "Robert has " << c_robert.getEnergie() << " energy.\n";
	std::cout << "Benji has " << s_benji.getEnergie() << " energy.\n";
	s_benji.guardGate();
	while (s_benji.getEnergie() > 1) {
		c_robert.beRepaired(1);
		while (c_robert.getHit() > 0 && c_robert.getEnergie() > 1
				&& c_robert.getHit() <= 20) {
			c_robert.beRepaired(2);
		}
		std::cout << "Robert has " << c_robert.getHit()
			<< " hit points.\n";
		s_benji.attack("Robert");
		c_robert.takeDamage(s_benji.getDamage());
	}
	std::cout << "Robert has " << c_robert.getHit() << " hit points.\n";
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	std::cout << "Robert has " << c_robert.getEnergie() << " energy.\n";
	std::cout << "Benji has " << s_benji.getEnergie() << " energy.\n";
	c_robert.attack("Benji");
	s_benji.takeDamage(c_robert.getDamage());
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	s_benji.beRepaired(10);
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	s_benji.attack("Robert");
	std::cout << "Robert has " << c_robert.getHit() << " hit points.\n";
	std::cout << "Benji has " << s_benji.getHit() << " hit points.\n";
	std::cout << "Robert has " << c_robert.getEnergie() << " energy.\n";
	std::cout << "Benji has " << s_benji.getEnergie() << " energy.\n";
	return 0;
}
