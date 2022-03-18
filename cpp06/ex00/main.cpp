#include <iostream>
#include <limits>
#include <cstdlib>

void	char_cast(std::string str, double f) {
	if (str.length() > 1)
		if (f >= 32 && f <= 127)
			std::cout << "char: " << static_cast<char>(f) << std::endl;
		else
			std::cout << "char: Impossible\n";
	else {
		if (str[0] >= '0' && str[0] <= '9')
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: " << str[0] << std::endl;
	}
}

int	check_error(char *av) {
	int	nb_dot = 0;
	int	nb_num = 0;
	int	nb_f = 0;
	int	is_neg = 0;
	int	i = -1;
	if (av[++i] == '-')
		is_neg = 1;
	else
		i--;
	while (av[++i]) {
		if (av[i] == '.')
			nb_dot++;
		if (av[i] >= '0' && av[i] <= '9')
			nb_num++;
		if (av[i] == 'f')
			nb_f++;
	}
	if (nb_dot > 1)
		return 1;
	if (nb_f > 1)
		return 1;
	if (nb_f == 1 && nb_dot == 0)
		return 1;
	if (nb_num < i + nb_dot + nb_f + is_neg)
		return 1;
}

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: wrong argument" << std::endl;
		return 0;
	};
	if (argv[1][0] == '\0') {
		std::cout << "error: empty string" << std::endl;
		return 0;
	}
	if (check_error(argv[1]))
		return 0;
	double f = atof(argv[1]);
	double min_inf = std::numeric_limits<double>::infinity() * (-1);
	std::string	str = "";
	str.append(argv[1]);
	char_cast(str, f);
	if (str == "nan" || str == "nanf" || f == min_inf ||
			std::numeric_limits<double>::infinity() == f)
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int>(f) << "\n";
	if (f == static_cast<int>(f)) {
		std::cout << "float: " << f << ".0f\n";
		std::cout << "double: " << f << ".0\n";
	}
	else {
		std::cout << "float: " << f << "f\n";
		std::cout << "double: " << f << std::endl;
	}
	return 0;
}
