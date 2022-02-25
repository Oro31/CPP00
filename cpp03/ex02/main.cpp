#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	c_robert("Robert");
	ScavTrap	s_benji("Benji");
	FragTrap	f_gege("Gege");

	while (s_benji.getEnergie() > 0) {
		s_benji.attack("Gege");
		f_gege.takeDamage(s_benji.getDamage());
		std::cout << "Gege hit = " << f_gege.getHit() << std::endl;;
		while (f_gege.getEnergie() > 0 && f_gege.getHit() < 100) {
			f_gege.beRepaired(10);
			std::cout << "Gege hit = " << f_gege.getHit() << std::endl;;
		}
	}
	f_gege.highFivesGuys();
	s_benji.guardGate();
	c_robert.attack("Benji");
	s_benji.takeDamage(c_robert.getDamage());
	s_benji.beRepaired(10);
	s_benji.attack("Robert");
	c_robert.beRepaired(10);
	std::cout << "Robert still has " << c_robert.getEnergie()
		<< " energie" << std::endl;
	std::cout << "Benji still has " << s_benji.getEnergie()
		<< " energie" << std::endl;
	std::cout << "Gege still has " << f_gege.getEnergie()
		<< " energie" << std::endl;
	return 0;
}
