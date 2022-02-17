#include "Karen.hpp"

Karen::Karen(void) {
}

void	Karen::complain(std::string level) {
	void	(*fn_ptr[4])(void) = {debug, info, warning, error};
	const char	*levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++) {
		if (std::strcmp(level.c_str(), levels[i]) == 0) {
			fn_ptr[i]();
			break ;
		}
	}
}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]\n"
		<< "something feel... wrong...\n"
		<< std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]\n"
		<< "things went wrong here and here, that is needed.\n"
		<< std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]\n"
		<< "things are going very nasty... you may want to take a look...\n"
		<< std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]\n"
		<< "critical error happend... you need to fix it before continuing.\n"
		<< std::endl;
}
