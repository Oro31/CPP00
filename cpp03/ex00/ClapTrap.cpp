#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap " << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) {
	std::cout << "ClapTrap " << name << "Constructor" << std::endl;
	_name = name;
	_hit = 10;
	_energie = 10;
	_damage = 0;
}

unsigned int	ClapTrap::getDamage(void) {
	return _damage;
}

void	ClapTrap::attack(const std::string &target) {
	if (_energie > 1) {
		std::cout << "ClapTrap " << _name << " attack " 
			<< target << ", causing " << _damage 
			<< " points of damage" << std::endl;
		_energie--;
	}
	else
		std::cout << "ClapTrap " << _name << ": not enought energie\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " taking " << amount
		<< " damage !" << std::endl;
	if (amount < _hit)
		_hit -= amount;
	else
		_hit = 0;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " try to repair...\n";
	if (_energie > 1 && (_hit + amount <= 10)) {
		_hit += amount;
		_energie--;
		std::cout << "Repairing succeed ! " << amount
			<< " hits points repaired." << std::endl;
	}
	else
		std::cout << "Can't repair." << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}
