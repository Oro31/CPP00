#include "Array.hpp"

int	main(void) {
	Array<std::string>	strArray(3);
	strArray[0] = "start";
	strArray[1] = "middle";
	strArray[2] = "end";

	Array<std::string>	copy = strArray;
	copy[1] = "other";
	std::cout << copy[0] << "," << copy[1] << std::endl;

	Array<int>	intArray(5);
	size_t	position = 0;
	try {
		while (true) {
			intArray[position] = (position + 1) * 10;
			position++;
		}
	} catch(std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << intArray[0] << "," << intArray[4] << "\n";
	return 0;
}
