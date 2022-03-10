#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "couleur.h"

class	Animal {
	public:

	Animal(void);
	Animal(const Animal &animal);
	virtual ~Animal(void);
	Animal &operator=(const Animal &animal);

	void	setType(std::string newType);
	std::string	getType(void);
	
	virtual void	makeSound(void) = 0;

	protected:

	std::string	_type;
};

#endif
