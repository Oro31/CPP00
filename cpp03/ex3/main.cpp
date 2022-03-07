#include "DiamondTrap.hpp"

int	main(void) {
	ClapTrap	c_robert("Robert");
	ScavTrap	s_benji("Benji");
	FragTrap	f_gege("Gege");
	DiamondTrap	d_dilan("Dilan");

	d_dilan.whoAmI();
	std::cout << "Dilan hit = " << d_dilan.getHit() << std::endl;;
	std::cout << "Gege hit = " << f_gege.getHit() << std::endl;;
	std::cout << "Robert hit = " << c_robert.getHit() << std::endl;;
	d_dilan.attack("Robert");
	c_robert.takeDamage(d_dilan.getDamage());
	std::cout << "Robert hit = " << c_robert.getHit() << std::endl;;
	s_benji.attack("Dilan");
	d_dilan.takeDamage(s_benji.getDamage());
	std::cout << "Dilan hit = " << d_dilan.getHit() << std::endl;;
	f_gege.attack("Dilan");
	d_dilan.takeDamage(f_gege.getDamage());
	std::cout << "Dilan still has " << d_dilan.getEnergie()
		<< " energie" << std::endl;
	std::cout << "Benji still has " << s_benji.getEnergie()
		<< " energie" << std::endl;
	return 0;
}
