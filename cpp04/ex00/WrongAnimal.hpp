#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "couleur.h"

class	WrongAnimal {
	public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &wronganimal);
	~WrongAnimal(void);
	WrongAnimal &operator=(const WrongAnimal &wronganimal);

	void	setType(std::string newType);
	std::string	getType(void);
	
	void	makeSound(void);

	protected:

	std::string	_type;
};

#endif
