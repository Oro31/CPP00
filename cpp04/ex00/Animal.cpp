#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << GREEN << "Animal Default constructor" 
		<< END_COLOR << std::endl;
	_type = "";
	return ;
}

Animal::Animal(const Animal &animal) {
	std::cout << GREEN << "Animal copy Constructor" 
		<< END_COLOR << std::endl;
	*this = animal;
	return ;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << GREEN << "Animal assignement operator" 
		<< END_COLOR << std::endl;
	_type = animal._type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << GREEN << "Animal destroyed" 
		<< END_COLOR << std::endl;
}

void	Animal::setType(std::string newType) {
	_type = newType;
}

std::string	Animal::getType(void) {
	return _type;
}

void	Animal::makeSound(void) {
	std::cout << "A sound that doesn't look like any specific animal"
		<< std::endl;
}
