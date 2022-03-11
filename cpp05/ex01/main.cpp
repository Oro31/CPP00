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
	try {
		Form	first("first", 2, 80);
		Bureaucrat	bb("Beber", 75);
		std::cout << first << std::endl;
		bb.signForm(first);
	}
	catch(std::exception &e) {
	}
	try {
		Form	first("first", 2, 80);
		Bureaucrat	al("Albert", 1);
		Bureaucrat	bb("Beber", 75);
		std::cout << first << std::endl;
		al.signForm(first);
		std::cout << first << std::endl;
		bb.signForm(first);
	}
	catch(std::exception &e) {
	}
	return 0;
}
