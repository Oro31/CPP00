#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	Weapon	axe = Weapon("Axe");
	HumanA bob("Bob", axe);

	bob.attack();
	axe.setType("Broken Axe");
	bob.attack();

	Weapon	sword = Weapon("Sword");
	HumanB	jim("Jim");

	jim.setWeapon(sword);
	jim.attack();
	sword.setType("Legendary Sword");
	jim.attack();

	return 0;
}
