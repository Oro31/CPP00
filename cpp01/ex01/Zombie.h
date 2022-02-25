#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class	Zombie {
	public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string name);

	private:

	std::string	z_name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif
