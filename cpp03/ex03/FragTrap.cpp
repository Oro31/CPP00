#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap " << "Default constructor" << std::endl;
	this->setName("fragtrap_default_name");
	this->setHit(100);
	this->setEnergie(100);
	this->setDamage(30);
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = fragtrap;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	std::cout << "FragTrap copy assignement operator" << std::endl;
	this->setName(fragtrap.getName());
	this->setHit(fragtrap.getHit());
	this->setEnergie(fragtrap.getEnergie());
	this->setDamage(fragtrap.getDamage());
	return *this;
}

FragTrap::FragTrap(const std::string name) {
	std::cout << "FragTrap " << name << " Constructor" << std::endl;
	this->setName(name);
	this->setHit(100);
	this->setEnergie(100);
	this->setDamage(30);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName();
	if (this->getHit() == 0)
		std::cout << " is dead... can't request for a high fives." << std::endl;
	else
		std ::cout << " requesting for a high fives." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->getName() << " destroyed" << std::endl;
}
