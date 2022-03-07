#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	public:

	DiamondTrap(void);
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &diamondtrap);
	~DiamondTrap(void);
	DiamondTrap &operator=(const DiamondTrap &diamondtrap);

	std::string	getPrivateName(void);
	void	whoAmI(void);

	private:

	std::string	_name;
};

#endif
