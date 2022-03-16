#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
		ShrubberyCreationForm	first("first");
		Bureaucrat	bb("Beber", 75);
		std::cout << first << std::endl;
		bb.signForm(first);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ShrubberyCreationForm	first("first");
		RobotomyRequestForm		second("second");
		PresidentialPardonForm	third("third");
		Bureaucrat	al("Albert", 20);
		std::cout << al << std::endl;
		al.signForm(first);
		al.signForm(second);
		al.signForm(third);
		std::cout << first << std::endl;
		std::cout << second << std::endl;
		std::cout << third << std::endl;
		al.executeForm(first);
		al.executeForm(second);
		al.executeForm(third);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	al("Albert", 20);
		Intern	someRandomIntern;
		Form	*rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		al.executeForm(*rrf);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	al("Albert", 20);
		Intern	someRandomIntern;
		Form	*rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		al.signForm(*rrf);
		al.executeForm(*rrf);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
