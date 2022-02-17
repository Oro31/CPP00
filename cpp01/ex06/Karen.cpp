#include "Karen.hpp"

Karen::Karen(void) {
}

void	Karen::complain(std::string level) {
	void	(*fn_ptr[4])(void) = {debug, info, warning, error};
	const char	*levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;

	while (++i < 4) {
		if (std::strcmp(level.c_str(), levels[i]) == 0)
			break ;
	}
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	while (i < 4) {
		fn_ptr[i]();
		i++;
	}
}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]\n"
		<< "Something feel... wrong...\n"
		<< std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]\n"
		<< "Things went wrong here and here, that is needed.\n"
		<< std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]\n"
		<< "Things are going very nasty... you may want to take a look...\n"
		<< std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]\n"
		<< "Critical error happend... you need to fix it before continuing.\n"
		<< std::endl;
}
