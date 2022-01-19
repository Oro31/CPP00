#include "Contact.hpp"

void	Contact::add_first_name() {
	std::cout << "first name: ";
	std::getline(std::cin, first_name);
}

void	Contact::add_last_name() {
	std::cout << "last name: ";
	std::getline(std::cin, last_name);
}

void	Contact::add_nick_name() {
	std::cout << "nickname: ";
	std::getline(std::cin, nick_name);
}

void	Contact::add_phone_number() {
	std::cout << "phone number: ";
	std::getline(std::cin, phone_number);
}

void	Contact::add_darkest_secret() {
	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret);
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
