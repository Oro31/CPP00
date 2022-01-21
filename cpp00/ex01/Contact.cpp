#include "Contact.hpp"

void	Contact::add_index(int n) {
	index.append(1, '0' + n);
}

void	Contact::add_first_name() {
	if (first_name.length() > 0)
		first_name = "";
	while (first_name.length() < 1) {
		std::cout << "first name: ";
		std::getline(std::cin, first_name);
	}
}

void	Contact::add_last_name() {
	if (last_name.length() > 0)
		last_name = "";
	while (last_name.length() < 1) {
		std::cout << "last name: ";
		std::getline(std::cin, last_name);
	}
}

void	Contact::add_nick_name() {
	if (nick_name.length() > 0)
		nick_name = "";
	while (nick_name.length() < 1) {
		std::cout << "nickname: ";
		std::getline(std::cin, nick_name);
	}
}

void	Contact::add_phone_number() {
	if (phone_number.length() > 0)
		phone_number = "";
	while (phone_number.length() < 1) {
		std::cout << "phone number: ";
		std::getline(std::cin, phone_number);
	}
}

void	Contact::add_darkest_secret() {
	if (darkest_secret.length() > 0)
		darkest_secret = "";
	while (darkest_secret.length() < 1) {
		std::cout << "darkest secret: ";
		std::getline(std::cin, darkest_secret);
	}
}

void	Contact::disp_cts(std::string str) {
	if (str.length() == 10) {
		std::cout << str;
	} else if (str.length() < 10) {
		std::cout << str;
		for (int i = str.length(); i < 10; i++) {
			std::cout << " ";
		}
	} else {
		for (int i = 0; i < 9 ; i++) {
			std::cout << str[i];
		}
		std::cout << ".";
	}
}

void	Contact::four_column_display() {
	disp_cts(index);
	std::cout << "|";
	disp_cts(first_name);
	std::cout << "|";
	disp_cts(last_name);
	std::cout << "|";
	disp_cts(nick_name);
}

void	Contact::search() {
	std::cout << "index: ";
	std::cout << index << std::endl;
	std::cout << "first name: ";
	std::cout << first_name << std::endl;
	std::cout << "last name: ";
	std::cout << last_name << std::endl;
	std::cout << "nickname: ";
	std::cout << nick_name << std::endl;
	std::cout << "phone number: ";
	std::cout << phone_number << std::endl;
	std::cout << "darkest secret: ";
	std::cout << darkest_secret << std::endl;
}
