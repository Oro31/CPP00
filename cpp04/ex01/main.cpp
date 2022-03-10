#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	Animal	*family[4];

	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0)
			family[i] = new Cat();
		else
			family[i] = new Dog();
	}
	for (int i = 0; i < 4; i++) {
		family[i]->makeSound();
	}
	Dog	*first = new Dog();
	Dog	second(*first);
	second.makeSound();
	delete first;
	second.makeSound();
	for (int i = 0; i < 4; i++) {
		delete family[i];
	}
	return 0;
}
