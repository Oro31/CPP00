#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap " << "Default constructor" << std::endl;
	_name = "diamondtrap_default_name";
	_hit = FragTrap(_name).getHit();
	_energie = ScavTrap(_name).getEnergie();
	_damage = FragTrap(_name).getDamage();
	std::string	c_name = _name.substr(0);
	ClapTrap::setName(c_name.append("_clap_name"));
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) {
	std::cout << "DiamondTrap copy constructor" << std::endl;
	*this = diamondtrap;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	std::cout << "DiamondTrap copy assignement operator" << std::endl;
	this->_name = diamondtrap._name;
	this->_hit = diamondtrap._hit;
	this->_energie = diamondtrap._energie;
	this->_damage = diamondtrap._damage;
	return *this;
}

DiamondTrap::DiamondTrap(const std::string name) {
	std::cout << "DiamondTrap " << name << " Constructor" << std::endl;
	_name = name;
	_hit = FragTrap(name).getHit();
	_energie = ScavTrap(name).getEnergie();
	_damage = FragTrap(name).getDamage();
	std::string	c_name = name.substr(0);
	ClapTrap::setName(c_name.append("_clap_name"));
}

/*
void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}*/

std::string	DiamondTrap::getPrivateName(void) {
	return _name;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap's private name : " << _name << std::endl;
	std::cout << "DiamondTrap's ClapTrap name : " 
		<< this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}
