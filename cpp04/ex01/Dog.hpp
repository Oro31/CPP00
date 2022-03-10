#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	public:

	Dog(void);
	Dog(const Dog &dog);
	~Dog(void);
	Dog &operator=(const Dog &dog);
	
	void	makeSound(void);

	private:

	Brain	*_brain;
};

#endif
