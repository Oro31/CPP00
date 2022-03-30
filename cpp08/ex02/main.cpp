#include "MutantStack.hpp"

int	main() {
	MutantStack<int>	mst;
	mst.push(5);
	mst.push(17);
	std::cout << mst.top() << std::endl;
	std::cout << mst.size() << std::endl;
	mst.pop();
	std::cout << mst.size() << std::endl;

	mst.push(1);
	mst.push(2);
	mst.push(3);
	mst.push(4);
	mst.push(5);
	mst.push(6);
	mst.push(7);
	mst.push(8);
	mst.push(9);
	MutantStack<int>::iterator first = mst.begin();
	MutantStack<int>::iterator second = mst.end();
	std::cout << mst.size() << std::endl;
	while (first != second) {
		std::cout << *first << std::endl;
		first++;
	}
	return 0;
}
