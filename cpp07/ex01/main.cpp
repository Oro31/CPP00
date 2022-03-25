#include "iter.h"

void	print_value(int value) {
	std::cout << value << "\n";
}

int	main(void) {
	int	array[3] = {1, 2, 3};
	iter(array, 3, print_value);
	return 0;
}
