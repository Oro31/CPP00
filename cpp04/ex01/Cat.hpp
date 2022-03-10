#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	public:

	Cat(void);
	Cat(const Cat &cat);
	~Cat(void);
	Cat &operator=(const Cat &cat);
	
	void	makeSound(void);

	private:

	Brain	*_brain;
};

#endif
