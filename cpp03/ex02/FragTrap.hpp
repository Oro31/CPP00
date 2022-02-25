#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include "couleur.h"

class	FragTrap : public ClapTrap {
	public:

	FragTrap(void);
	FragTrap(const std::string name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap(void);
	FragTrap &operator=(const FragTrap &fragtrap);

	void	attack(const std::string &target);
	void	highFivesGuys(void);

	private:
};

#endif
