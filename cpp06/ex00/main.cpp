#include <iostream>
#include <limits>
#include <cstdlib>

enum e_type {
	CHAR = 0,
	INT,
	DOUBLE,
	FLOAT
};

void	print_int(std::string str) {
	int	i = -1;
	int left = 0;
	while (str[++i] >= '0' && str[i] <= '9') {
		left = (left * 10) + ((int)str[i] - 48);
	}
	std::cout << left << std::endl;
}

void	print_double(std::string str) {
	int	i = -1;
	int left = 0;
	int	right = 0;
	while (str[++i] >= '0' && str[i] <= '9') {
		left = (left * 10) + ((int)str[i] - 48);
	}
	if (str[i] == '.') {
		while (str[++i] >= '0' && str[i] <= '9') {
			right = (right * 10) + ((int)str[i] - 48);
		}
	}
	std::cout << left << '.' << right << std::endl;
	return ;
}

void	print_float(std::string str) {
	int	i = -1;
	int left = 0;
	int	right = 0;
	while (str[++i] >= '0' && str[i] <= '9') {
		left = (left * 10) + ((int)str[i] - 48);
	}
	if (str[i] == '.') {
		while (str[++i] >= '0' && str[i] <= '9') {
			right = (right * 10) + ((int)str[i] - 48);
		}
	}
	std::cout << left << '.' << right << "f\n";
	return ;
}

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: wrong argument" << std::endl;
		return 0;
	}
	if (argv[1][0] == '\0') {
		std::cout << "error: empty string" << std::endl;
		return 0;
	}
	std::string	str = "";
	str.append(argv[1]);
	print_float(str);
	print_double(str);
	print_int(str);
	return 0;
//	for (int i = 0; argv[1][i]; i++) {
//	}

//	int	nb_alpha = 0;
//	int	nb_dot = 0;
/*	int	i = -1;
	int left = 0;
	int	right = 0;
	while (argv[1][++i] >= '0' && argv[1][i] <= '9') {
		left = (left * 10) + ((int)argv[1][i] - 48);
	}
	if (argv[1][i] == '.') {
		while (argv[1][++i] >= '0' && argv[1][i] <= '9') {
			right = (right * 10) + ((int)argv[1][i] - 48);
		}
	}
	std::cout << left << '.' << right << "f\n";
	return 0;*/
/*	if (argv[1][1] == '\0') {
		if (argv[1][0] < 32 || argv[1][0] > 127)
			std::cout << "Char: Non displayable" << std::endl;
		else
			std::cout << "Char: " << argv[1][0] << std::endl;
		if (argv[1][0] < '0' || argv[1][0] > '9')
			std::cout << "Int: Impossible" << std::endl;
		else
			std::cout << "Int: " << (int)argv[1][0] - 48 << std::endl;
	}
	while (argv[1][++i]) {
		if ((argv[1][i] < '0' || argv[1][i] > '9') && argv[1][i] != '.')
			nb_alpha++;
		if (argv[1][i] == '.')
			nb_dot++;
	}
	if (nb_alpha > 2) {
		std::cout << "too many alpha" << std::endl;
		return 0;
	}
	if (nb_dot > 1) {
		std::cout << "too many dot" << std::endl;
		return 0;
	}
	if (argv[1][--i] == 'f' && nb_dot == 1){
		std::cout << "float" << std::endl;
	}*/
}
