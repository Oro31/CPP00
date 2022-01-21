#include "Zombie.h"

Zombie::Zombie(std::string name) {
	z_name = name;
}

void	Zombie::announce(void) {
	std::cout << z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << z_name << " destroyed" << std::endl;
}
