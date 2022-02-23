#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << GREEN << "ClapTrap " << "Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	std::cout << GREEN << "ClapTrap copy Constructor" 
		<< END_COLOR << std::endl;
	*this = claptrap;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	std::cout << GREEN << "ClapTrap copy assignement operator" 
		<< END_COLOR << std::endl;
	_name = claptrap._name;
	_hit = claptrap._hit;
	_energie = claptrap._energie;
	_damage = claptrap._damage;
	return *this;
}

ClapTrap::ClapTrap(const std::string name) : _name(name),
	_hit(10), _energie(10), _damage(0) {
	std::cout << GREEN << "ClapTrap " << name << " parametric Constructor" 
		<< END_COLOR << std::endl;
	return ;
}

unsigned int	ClapTrap::getDamage(void) const {
	return _damage;
}

unsigned int	ClapTrap::getHit(void) const {
	return _hit;
}

unsigned int	ClapTrap::getEnergie(void) const {
	return _energie;
}

const std::string	&ClapTrap::getName(void) const {
	return _name;
}

void	ClapTrap::setDamage(const unsigned int damage) {
	_damage = damage;
}

void	ClapTrap::setEnergie(const unsigned int energie) {
	_energie = energie;
}

void	ClapTrap::setHit(const unsigned int hit) {
	_hit = hit;
}

void	ClapTrap::setName(const std::string name) {
	_name = name;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->getEnergie() > 1) {
		std::cout << "ClapTrap " << this->getName() << " attack " 
			<< target << ", causing " << this->getDamage() 
			<< " points of damage" << std::endl;
		_energie--;
	}
	else {
		std::cout << "ClapTrap " << this->getName()
			<< ": not enought energie" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " taking " << amount
		<< " damage !" << std::endl;
	if (amount < this->getHit())
		_hit -= amount;
	else
		_hit = 0;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " try to repair...\n";
	if (this->getEnergie() > 1) {
		_hit += amount;
		_energie--;
		std::cout << "Repairing succeed ! " << amount
			<< " hits points repaired." << std::endl;
	}
	else
		std::cout << "Can't repair." << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << GREEN << "ClapTrap " << this->getName() << " destroyed" 
		<< END_COLOR << std::endl;
}
