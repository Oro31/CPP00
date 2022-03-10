#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << GREEN << "Cat Default constructor" 
		<< END_COLOR << std::endl;
	_type = "Cat";
	return ;
}

Cat::Cat(const Cat &cat) {
	std::cout << GREEN << "Cat copy Constructor" 
		<< END_COLOR << std::endl;
	*this = cat;
	return ;
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << GREEN << "Cat assignement operator" 
		<< END_COLOR << std::endl;
	_type = cat._type;
	return *this;
}

Cat::~Cat(void) {
	std::cout << GREEN << "Cat destroyed" 
		<< END_COLOR << std::endl;
}

void	Cat::makeSound(void) {
	std::cout << "Miaou..."
		<< std::endl;
}
