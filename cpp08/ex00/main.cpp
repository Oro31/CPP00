#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int	main(void) {
	std::vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}
	std::vector<int>::const_iterator it;
	try {
		it = easyfind(vec, 10);
		std::cout << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
