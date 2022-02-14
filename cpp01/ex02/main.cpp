#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << "addr of str = " << &str << "\n"
		<< "addr held by stringPTR = " << stringPTR << "\n"
		<< "addr held by stringREF = " << &stringREF << std::endl;
	std::cout << "value of str = " << str << "\n"
		<< "value pointed by stringPTR = " << *stringPTR << "\n"
		<< "value pointed by stringREF = " << stringREF << std::endl;
	return 0;
}
