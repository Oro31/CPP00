#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("claptrap_default_name"), _hit(10),
	_energie(10), _damage(0) {
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
	std::cout << GREEN << "ClapTrap " << name << " Constructor" 
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
	if (_hit == 0) {
		std::cout << "ClapTrap " << _name << " is dead..."
			<< " can't attack." << std::endl;
	}
	else if (_energie >= 1) {
		std::cout << "ClapTrap " << _name << " attack " 
			<< target << ", causing " << _damage 
			<< " points of damage" << std::endl;
		_energie--;
	}
	else {
		std::cout << "ClapTrap " << _name
			<< " don't has enought energie to attack" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hit == 0) {
		std::cout << "ClapTrap " << _name << " is dead..."
			<< " can't take damage." << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " taking " << amount
			<< " damage !" << std::endl;
		if (amount < _hit)
			_hit -= amount;
		else
			_hit = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hit == 0) {
		std::cout << "ClapTrap " << _name << " is dead..."
			<< " can't repair himself." << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " try to repair...\n";
		if (_energie >= 1) {
			_hit += amount;
			_energie--;
			std::cout << "Repairing succeed ! " << amount
				<< " hits points repaired." << std::endl;
		}
		else {
			std::cout << "don't has enought energie to repair" 
				<< std::endl;
		}
	}
}

ClapTrap::~ClapTrap(void) {
	std::cout << GREEN << "ClapTrap " << _name << " destroyed" 
		<< END_COLOR << std::endl;
}
