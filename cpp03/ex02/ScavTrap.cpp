#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap " << "Default constructor" << std::endl;
	this->setName("scavtrap_default_name");
	this->setHit(100);
	this->setEnergie(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	std::cout << "ScavTrap copy assignement operator" << std::endl;
	this->setName(scavtrap.getName());
	this->setHit(scavtrap.getHit());
	this->setEnergie(scavtrap.getEnergie());
	this->setDamage(scavtrap.getDamage());
	return *this;
}

ScavTrap::ScavTrap(const std::string name) {
	std::cout << "ScavTrap " << name << " Constructor" << std::endl;
	this->setName(name);
	this->setHit(100);
	this->setEnergie(50);
	this->setDamage(20);
}

void	ScavTrap::attack(const std::string &target) {
	if (this->getHit() == 0) {
		std::cout << "ScavTrap " << this->getName() << " is dead..."
			<< " can't attack." << std::endl;
	}
	else if (this->getEnergie() >= 1) {
		std::cout << "ScavTrap " << this->getName() << " attack "
			<< target << ", causing " << this->getDamage()
			<< " points of damage" << std::endl;
		this->setEnergie(this->getEnergie() - 1);
	}
	else {
		std::cout << "ScavTrap " << this->getName()
			<< " don't has enought energie to attack" << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName();
	if (this->getHit() == 0)
		std::cout << " is dead... can't go in gate keeper mode" << std::endl;
	else
		std ::cout << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->getName() << " destroyed" << std::endl;
}
