#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << GREEN << "FragTrap Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	std::cout << GREEN << "FragTrap copy Constructor" 
		<< END_COLOR << std::endl;
	*this = fragtrap;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	std::cout << GREEN << "FragTrap assignement operator" 
		<< END_COLOR << std::endl;
	_name = fragtrap._name;
	_hit = fragtrap._hit;
	_energie = fragtrap._energie;
	_damage = fragtrap._damage;
	return *this;
}

FragTrap::FragTrap(const std::string name) {
	std::cout << GREEN << "FragTrap " << name << " constructor" 
		<< END_COLOR << std::endl;
	_name = name;
	_hit = 100;
	_energie = 100;
	_damage = 30;
	return ;
}

void	FragTrap::attack(const std::string &target) {
	if (_energie > 1) {
		std::cout << "FragTrap " << _name << " attack "
			<< target << ", causing " << _damage
			<< " points of damage" << std::endl;
	}
	else {
		std::cout << "FragTrap " << _name
			<< " not enought energie" << std::endl;
	}
	return ;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name
		<< " ask for a high fives !" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << GREEN << "FragTrap " << _name << " destroyed" 
		<< END_COLOR << std::endl;
	return ;
}
