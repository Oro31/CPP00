#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	c_robert("Robert");
	ScavTrap	s_benji("Benji");
	FragTrap	f_gege("Gege");

	ClapTrap	c_copy(c_robert);
	ScavTrap	s_copy(s_benji);
	FragTrap	f_copy(f_gege);
	while (s_benji.getEnergie() > 0) {
		f_gege.attack("Benji");
		s_benji.takeDamage(f_gege.getDamage());
		std::cout << s_benji.getName() << "Benji hit = " << s_benji.getHit()
			<< std::endl;;
		while (s_benji.getEnergie() > 0 && s_benji.getHit() < 100) {
			s_benji.beRepaired(10);
			std::cout << s_benji.getName() << " hit = "
				<< s_benji.getHit() << std::endl;;
		}
	}
	f_gege.highFivesGuys();
	s_benji.guardGate();
	c_robert.attack("Benji");
	s_benji.takeDamage(c_robert.getDamage());
	s_benji.beRepaired(10);
	s_benji.attack("Robert");
	c_robert.beRepaired(10);
	std::cout << c_robert.getName() << "Robert still has "
		<< c_robert.getEnergie() << " energie" << std::endl;
	std::cout << s_benji.getName() << "Benji still has " 
		<< s_benji.getEnergie() << " energie" << std::endl;
	std::cout << f_gege.getName() << "Gege still has "
		<< f_gege.getEnergie() << " energie" << std::endl;
	return 0;
}
