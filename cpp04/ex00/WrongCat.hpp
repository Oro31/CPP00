#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:

	WrongCat(void);
	WrongCat(const WrongCat &wrongcat);
	~WrongCat(void);
	WrongCat &operator=(const WrongCat &wrongcat);
	
	void	makeSound(void);
};

#endif
