#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	nb_contacts = 0;
	index = 0;
}

void	PhoneBook::add_contact() {
	Contact	new_con;
	new_con.add_index(index);
	new_con.add_first_name();
	new_con.add_last_name();
	new_con.add_nick_name();
	new_con.add_phone_number();
	new_con.add_darkest_secret();
	if (nb_contacts < 8)
		nb_contacts++;
	contacts[index] = new_con;
	if (index == 7)
		index = 0;
	else
		index++;
	std::cout << "$>";
}

void	PhoneBook::search_contact() {
	std::cout << "~~~index~~|";
	std::cout << "first_name|";
	std::cout << "~last_name|";
	std::cout << "~nick_name" << std::endl;
	for (int i = 0; i < nb_contacts; i++) {
		contacts[i].four_column_display();
		std::cout << std::endl;
	}
	std::cout << "index$>";
	std::string id_disp;
	std::getline(std::cin, id_disp);
	if (std::strcmp("0", id_disp.c_str()) == 0) {
		contacts[0].search();
	} else if (std::strcmp("1", id_disp.c_str()) == 0) {
		contacts[1].search();
	} else if (std::strcmp("2", id_disp.c_str()) == 0) {
		contacts[2].search();
	} else if (std::strcmp("3", id_disp.c_str()) == 0) {
		contacts[3].search();
	} else if (std::strcmp("4", id_disp.c_str()) == 0) {
		contacts[4].search();
	} else if (std::strcmp("5", id_disp.c_str()) == 0) {
		contacts[5].search();
	} else if (std::strcmp("6", id_disp.c_str()) == 0) {
		contacts[6].search();
	} else if (std::strcmp("7", id_disp.c_str()) == 0) {
		contacts[7].search();
	} else {
		std::cout << "Error: ";
		std::cout << id_disp;
		std::cout << ": index not found" << std::endl;
	}
	std::cout << "$>";
}
