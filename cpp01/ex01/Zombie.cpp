#include "Zombie.h"

Zombie::Zombie(void) {
}

Zombie::Zombie(std::string name) {
	z_name = name;
}

void	Zombie::announce(void) {
	std::cout << z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	z_name = name;
}

Zombie::~Zombie(void) {
	std::cout << z_name << " destroyed" << std::endl;
}
