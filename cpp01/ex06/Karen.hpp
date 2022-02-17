#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

class	Karen {
	public:
	Karen(void);
	void	complain(std::string level);

	private:
	static void	debug();
	static void	info();
	static void	warning();
	static void	error();
};

#endif
