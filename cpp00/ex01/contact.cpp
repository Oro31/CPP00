#include "contact.hpp"

void	Contact::add_first_name() {
	std::cout << "first name: ";
	std::getline(std::cin, first_name);
}

void	Contact::disp_fst() {
	if (first_name.length() == 10) {
		std::cout << first_name;
	} else if (first_name.length() < 10) {
		std::cout << first_name;
		for (int i = first_name.length(); i < 10; i++) {
			std::cout << " ";
		}
	} else {
		for (int i = 0; i < 10; i++) {
			std::cout << first_name.c_str()[i];
		}
	}
}
