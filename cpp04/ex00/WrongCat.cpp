#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << GREEN << "WrongCat Default constructor" 
		<< END_COLOR << std::endl;
	_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &wrongcat) {
	std::cout << GREEN << "WrongCat copy Constructor" 
		<< END_COLOR << std::endl;
	*this = wrongcat;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat) {
	std::cout << GREEN << "WrongCat assignement operator" 
		<< END_COLOR << std::endl;
	_type = wrongcat._type;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << GREEN << "WrongCat destroyed" 
		<< END_COLOR << std::endl;
}

void	WrongCat::makeSound(void) {
	std::cout << "Wrong Miaou..."
		<< std::endl;
}
