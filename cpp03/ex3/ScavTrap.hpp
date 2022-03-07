#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap {
	public:

	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap(void);
	ScavTrap &operator=(const ScavTrap &scavtrap);

	void			guardGate(void);
	void			attack(const std::string &target);
};

#endif
