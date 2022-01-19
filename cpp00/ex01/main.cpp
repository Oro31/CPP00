#include "phone_book.h"
#include "repertoire.hpp"

int	main()
{
	repertoire	rep;
	std::cout << "$>";
	for (std::string line; std::getline(std::cin, line);) {
		if (std::strcmp("EXIT", line.c_str()) == 0) {
			break ;
		} else if (std::strcmp("ADD", line.c_str()) == 0) {
			rep.add_contact();
		} else if (std::strcmp("SEARCH", line.c_str()) == 0) {
			rep.search_contact();
		} else {
			std::cout << line << std::endl;
			std::cout << "$>";
		}
	}
	return 0;
}
