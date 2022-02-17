#include "Karen.hpp"

int	main(int argc, char **argv) {
	if (argc < 2)
		return 0;
	Karen	karen;
	for (int i = 1; i < argc; i++) {
		karen.complain(argv[i]);
	}
	return 0;
}
