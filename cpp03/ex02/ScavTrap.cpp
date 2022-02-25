#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap " << "Default constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	std::cout << "ScavTrap copy assignement operator" << std::endl;
	_name = scavtrap._name;
	_hit = scavtrap._hit;
	_energie = scavtrap._energie;
	_damage = scavtrap._damage;
	return *this;
}

ScavTrap::ScavTrap(const std::string name) {
	std::cout << "ScavTrap " << name << " Constructor" << std::endl;
	_name = name;
	_hit = 100;
	_energie = 50;
	_damage = 20;
	return ;
}

void	ScavTrap::attack(const std::string &target) {
	if (_energie >= 1) {
		std::cout << "ScavTrap " << _name << " attack "
			<< target << ", causing " << _damage
			<< " points of damage" << std::endl;
		_energie--;
	}
	else {
		std::cout << "ScavTrap " << _name
			<< ": not enought energie" << std::endl;
	}
	return ;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name
		<< " is now in Gate keeper mode.\n";
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
	return ;
}
