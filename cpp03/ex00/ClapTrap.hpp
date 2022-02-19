#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class	ClapTrap {
	public:

	ClapTrap(void);
	ClapTrap(const std::string name);
	~ClapTrap(void);
	unsigned int	getDamage(void);
	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	private:

	std::string		_name;
	unsigned int	_hit;
	unsigned int	_energie;
	unsigned int	_damage;
};

#endif
