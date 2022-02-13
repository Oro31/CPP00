#include "header.h"
#include "PhoneBook.hpp"

int	main() {
	PhoneBook	rep;

	std::cout << "$>";
	for (std::string line; std::getline(std::cin, line);) {
		if (std::strcmp("EXIT", line.c_str()) == 0) {
			break ;
		} else if (std::strcmp("ADD", line.c_str()) == 0) {
			rep.add_contact();
		} else if (std::strcmp("SEARCH", line.c_str()) == 0) {
			rep.search_contact();
		} else {
			std::cout << "Error: ";
			std::cout << line;
			std::cout << ": command not found" << std::endl;
			std::cout << "$>";
		}
	}
	return 0;
}
