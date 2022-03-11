#include "Bureaucrat.hpp"

int	main(void) {
	try {
		Bureaucrat	al("Albert", 1);
		std::cout << al << std::endl;
		al.increment();
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	bb("Beber", 0);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	gg("Gerard", 151);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	al("Albert", 150);
		std::cout << al << std::endl;
		al.decrement();
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	*al;
		al = new Bureaucrat("Albert", 75);
		std::cout << *al << std::endl;
		al->decrement();
		std::cout << *al << std::endl;
		al->increment();
		std::cout << *al << std::endl;
		delete al;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
