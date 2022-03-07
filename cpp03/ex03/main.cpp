#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	d_dilan("Dilan");
	DiamondTrap	d_default;

	d_default.whoAmI();
	d_dilan.whoAmI();
	d_dilan.guardGate();
	d_dilan.highFivesGuys();
	d_dilan.takeDamage(20);
	d_dilan.beRepaired(10);
	d_dilan.attack("Robert");
	std::cout << d_dilan.getPrivateName() << " hit = " << d_dilan.getHit()
		<< std::endl;;
	return 0;
}
