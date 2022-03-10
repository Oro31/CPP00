#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << GREEN << "Cat Default constructor" 
		<< END_COLOR << std::endl;
	_type = "Cat";
	_brain = new Brain();
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
	_brain = new Brain();
	*_brain = *(cat._brain);
	return *this;
}

Cat::~Cat(void) {
	std::cout << GREEN << "Cat destroyed" 
		<< END_COLOR << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) {
	std::cout << "Miaou..."
		<< std::endl;
}
