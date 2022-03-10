#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << GREEN << "WrongAnimal Default constructor" 
		<< END_COLOR << std::endl;
	_type = "";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) {
	std::cout << GREEN << "WrongAnimal copy Constructor" 
		<< END_COLOR << std::endl;
	*this = wronganimal;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal) {
	std::cout << GREEN << "WrongAnimal assignement operator" 
		<< END_COLOR << std::endl;
	_type = wronganimal._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << GREEN << "WrongAnimal destroyed" 
		<< END_COLOR << std::endl;
}

void	WrongAnimal::setType(std::string newType) {
	_type = newType;
}

std::string	WrongAnimal::getType(void) {
	return _type;
}

void	WrongAnimal::makeSound(void) {
	std::cout << "A wrong sound that doesn't look like an animal"
		<< std::endl;
}
