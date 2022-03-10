#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << GREEN << "Dog Default constructor" 
		<< END_COLOR << std::endl;
	_type = "Dog";
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
	return *this;
}

Dog::~Dog(void) {
	std::cout << GREEN << "Dog destroyed" 
		<< END_COLOR << std::endl;
}

void	Dog::makeSound(void) {
	std::cout << "Wouaf !"
		<< std::endl;
}
