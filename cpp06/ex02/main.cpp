#include <unistd.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void) {
	usleep(100000);
	srand(time(NULL));
	int	random = rand() % 3;
	switch (random) {
		case 0:
			return(new A());
			break;
		case 1:
			return(new B());
			break;
		default:
			return(new C());
			break;
	}
}

void	identify(Base *ptr) {
	if (dynamic_cast<A *>(ptr) != NULL) {
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(ptr) != NULL) {
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(ptr) != NULL) {
		std::cout << "C" << std::endl;
		return ;
	}
}

void	identify(Base &ptr) {
	try {
		(void)dynamic_cast<A &>(ptr);
		std::cout << "A" << std::endl;
	} catch(const std::exception &e) {}
	try {
		(void)dynamic_cast<B &>(ptr);
		std::cout << "B" << std::endl;
	} catch(const std::exception &e) {}
	try {
		(void)dynamic_cast<C &>(ptr);
		std::cout << "C" << std::endl;
	} catch(const std::exception &e) {}
}

int	main(void) {
	Base	*ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}
