#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << GREEN << "Dog Default constructor" 
		<< END_COLOR << std::endl;
	_type = "Dog";
	_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &dog) {
	std::cout << GREEN << "Dog copy Constructor" 
		<< END_COLOR << std::endl;
	*this = dog;
	return ;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << GREEN << "Dog assignement operator" 
		<< END_COLOR << std::endl;
	_type = dog._type;
	_brain = new Brain();
	*_brain = *(dog._brain);
	return *this;
}

Dog::~Dog(void) {
	std::cout << GREEN << "Dog destroyed" 
		<< END_COLOR << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) {
	std::cout << "Wouaf !"
		<< std::endl;
	_brain->printIdeas();
}
