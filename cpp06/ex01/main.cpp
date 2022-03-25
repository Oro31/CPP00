#include <stdint.h>
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw) {
	Data *tmp = new Data();
	tmp = reinterpret_cast<Data *>(raw);
	return tmp;
}

int	main(void) {
	Data	*first = new Data(42);
	std::cout << first << "::" << first->getId() << "\n";
	uintptr_t	ser = serialize(first);
	std::cout << ser << "\n";
	Data	*second = deserialize(ser);
	std::cout << second << "::" << second->getId() << "\n";
	return 0;
}
