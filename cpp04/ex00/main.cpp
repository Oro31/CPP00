#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {
	Animal	*random_animal = new Animal();
	Animal	*dog_animal = new Dog();
	Animal	*cat_animal = new Cat();

	WrongAnimal	*wrandom_wanimal = new WrongAnimal();
	WrongAnimal	*wcat_wanimal = new WrongCat();

	wrandom_wanimal->setType("wrong unspecified type");
	std::cout << "What kind of sound make a " << wrandom_wanimal->getType()
		<< " ?\n";
	wrandom_wanimal->makeSound();
	std::cout << "What kind of sound make a " << wcat_wanimal->getType()
		<< " ?\n";
	wcat_wanimal->makeSound();
	std::cout << "What kind of sound make a " << cat_animal->getType()
		<< " ?\n";
	cat_animal->makeSound();
	std::cout << "What kind of sound make a " << dog_animal->getType()
		<< " ?\n";
	dog_animal->makeSound();
	std::cout << random_animal->getType() << std::endl;
	random_animal->setType("no specific type");
	std::cout << "What kind of sound make a " << random_animal->getType()
		<< " ?\n";
	random_animal->makeSound();
	delete random_animal;
	delete dog_animal;
	delete cat_animal;
	delete wrandom_wanimal;
	delete wcat_wanimal;
	return 0;
}
