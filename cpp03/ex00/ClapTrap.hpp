#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "couleur.h"

class	ClapTrap {
	public:

	ClapTrap(void);
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &claptrap);
	~ClapTrap(void);
	ClapTrap &operator=(const ClapTrap &claptrap);

	unsigned int	getDamage(void) const;
	unsigned int	getEnergie(void) const;
	unsigned int	getHit(void) const;
	const std::string		&getName(void) const;

	void	setDamage(const unsigned int damage);
	void	setEnergie(const unsigned int energie);
	void	setHit(const unsigned int hit);
	void	setName(const std::string name);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private:

	std::string		_name;
	unsigned int	_hit;
	unsigned int	_energie;
	unsigned int	_damage;
};

#endif
