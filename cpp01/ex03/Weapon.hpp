#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class	Weapon {
	public:

	Weapon();
	Weapon(std::string weapon_type);
	const std::string	&getType(void);
	void				setType(std::string new_type);

	private:

	std::string	_type;
};

#endif
