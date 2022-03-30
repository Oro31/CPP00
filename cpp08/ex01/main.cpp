#include "Span.hpp"

int	main() {
	try {
		Span	sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << "; " << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span	sp = Span(10000);
		std::vector<int> vec;
		for (int i = 0; i < 10000; i++) {
			vec.push_back(i);
		}
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(15);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
