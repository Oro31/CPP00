#include "PhoneBook.hpp"

void	PhoneBook::add_contact() {
	Contact	new_con;
	new_con.add_first_name();
	if (index == 7)
		index = 0;
	else
		nb_contacts++;
	contacts[index] = new_con;
	index++;
	std::cout << "$>";
}

void	PhoneBook::search_contact() {
	std::cout << "first_name" << std::endl;
	for (int i = 0; i < nb_contacts; i++) {
		contacts[i].disp_fst();
		std::cout << std::endl;
	}
	std::cout << "$>";
}

void	PhoneBook::disp_cts(std::string str) {
	if (str.length() == 10) {
		std::cout << str;
	} else if (str.length() < 10) {
		std::cout << str;
		for (int i = str.length(); i < 10; i++) {
			std::cout << " ";
		} 
	} else {
		for (int i = 0; i < 9; i++) {
			std::cout << str[i];
		}
		std::cout << ".";
	}
}
