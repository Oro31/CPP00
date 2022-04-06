#include "MutantStack.hpp"
#include <list>

int	main() {
	std::list<int>	mst;
	mst.push_back(5);
	mst.push_back(17);
	std::cout << mst.back() << std::endl;
	std::cout << mst.size() << std::endl;
	mst.pop_back();
	std::cout << mst.size() << std::endl;

	mst.push_back(1);
	mst.push_back(2);
	mst.push_back(3);
	mst.push_back(4);
	mst.push_back(5);
	mst.push_back(6);
	mst.push_back(7);
	mst.push_back(8);
	mst.push_back(9);
	std::list<int>::iterator first = mst.begin();
	std::list<int>::iterator second = mst.end();
	std::cout << mst.size() << std::endl;
	while (first != second) {
		std::cout << *first << std::endl;
		first++;
	}
	return 0;
}
