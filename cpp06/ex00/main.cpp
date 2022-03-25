#include <iostream>
#include <limits>
#include <cstdlib>

int	is_int(std::string av) {
	int	i = -1;
	if (av[0] == '-')
		i++;
	while (av[++i]) {
		if (av[i] < '0' || av[i] > '9')
			return 0;
	}
	if (i >= 11 && av[0] == '-') {
		if (av.compare("-2147483648") > 0)
			return 0;
	} else if (i >= 10) {
		if (av.compare("2147483647") > 0)
			return 0;
	}
	return 1;
}

int	is_float(std::string av) {
	int	nb_dot = 0;
	int	nb_f = 0;
	int	is_neg = 0;
	int	nb_num = 0;
	int	dec = 0;
	int	i = -1;
	if (av == "nanf" || av == "-inff" || av == "+inff")
		return 1;
	if (av[++i] == '-')
		is_neg++;
	else
		i--;
	while (av[++i]) {
		if (av[i] == '.')
			nb_dot++;
		if (av[i] == 'f')
			nb_f++;
		if (av[i] >= '0' && av[i] <= '9' && nb_dot == 0)
			nb_num++;
		if (av[i] >= '0' && av[i] <='9' && nb_dot >= 1)
			dec++;
	}
	if (nb_num > 0 && dec > 0 && nb_dot == 1 && nb_f == 1
			&& (dec + nb_num + is_neg) == (i - 2)) {
		double	f = atof(av.c_str());
		if (f < std::numeric_limits<float>::max() * -1
				|| f > std::numeric_limits<float>::max()) {
			return 0;
		} else
			return 1;
	}
	else
		return 0;
}

int	is_double(std::string av) {
	int	nb_dot = 0;
	int	is_neg = 0;
	int	nb_num = 0;
	int	dec = 0;
	int	i = -1;
	if (av == "nan" || av == "-inf" || av == "+inf")
		return 1;
	if (av[++i] == '-')
		is_neg++;
	else
		i--;
	while (av[++i]) {
		if (av[i] == '.')
			nb_dot++;
		if (av[i] >= '0' && av[i] <= '9' && nb_dot == 0)
			nb_num++;
		if (av[i] >= '0' && av[i] <='9' && nb_dot >= 1)
			dec++;
	}
	if (nb_num > 0 && dec > 0 && nb_dot == 1
			&& (dec + nb_num + is_neg) == (i - 1))
			return 1;
	return 0;
}

int	check_error(std::string av) {
	if (av.length() == 1) {
		if (av[0] >= '0' && av[0] <= '9')
			return 1;
		else
			return 0;
	}
	if (is_int(av))
		return 1;
	if (is_float(av))
		return 2;
	if (is_double(av))
		return 3;
	return 4;
}

int	imp_int(std::string str, double f) {
	double min_inf = std::numeric_limits<double>::infinity() * (-1);
	if (str.length() == 1 && (str[0] >= '0' && str[0] <= '9'))
		return 0;
	if (str == "nan" || str == "nanf" || f == min_inf ||
			std::numeric_limits<double>::infinity() == f
			|| f < std::numeric_limits<int>::min()
			|| f > std::numeric_limits<int>::max())
		return 1;
	return 0;
}

int	imp_float(std::string str, double f) {
	if (str.length() == 1 && (str[0] >= '0' && str[0] <= '9'))
		return 0;
	if (str != "-inf" && str != "-inff" && str != "+inf" && str != "+inff"
			&& (std::numeric_limits<float>::max() < f
			|| std::numeric_limits<float>::max() * -1 > f))
		return 1;
	return 0;
}

void	char_casting(std::string str, char f) {
	if (f < 32 || f > 126)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << f << "'" << "\n";
	if (str[0] < '0' || str[0] > '9')
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int>(f) << "\n";
	if (str[0] < '0' || str[0] > '9')
		std::cout << "float: Impossible\n";
	else
		std::cout << "float: " << static_cast<float>(f) << ".0f\n";
	if (str[0] < '0' || str[0] > '9')
		std::cout << "double: Impossible\n";
	else
		std::cout << "double: " << static_cast<double>(f) << ".0\n";
}

void	int_casting(std::string str, int f) {
	if (str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff"
			|| str == "nan" || str == "nanf")
		std::cout << "char: Impossible\n";
	else if (f < 32 || f > 126)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << "\n";
	if (imp_int(str, f))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << f << "\n";
	if (imp_float(str, f))
		std::cout << "float: Impossible\n";
	else
		std::cout << "float: " << static_cast<float>(f) << ".0f\n";
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
		std::cout << "double: Impossible\n";
	else
		std::cout << "double: " << static_cast<double>(f) << ".0\n";
}

void	float_casting(std::string str, float f) {
	if (str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff"
			|| str == "nan" || str == "nanf")
		std::cout << "char: Impossible\n";
	else if (f < 32 || f > 126)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << "\n";
	if (imp_int(str, f))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int>(f) << "\n";
	if (imp_float(str, f))
		std::cout << "float: Impossible\n";
	else if (f == static_cast<int>(f))
		std::cout << "float: " << static_cast<float>(f) << ".0f\n";
	else
		std::cout << "float: " << static_cast<float>(f) << "f\n";
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
		std::cout << "double: Impossible\n";
	else if (f == static_cast<int>(f))
		std::cout << "double: " << static_cast<double>(f) << ".0\n";
	else
		std::cout << "double: " << static_cast<double>(f) << "\n";
}

void	double_casting(std::string str, double f) {
	if (str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff"
			|| str == "nan" || str == "nanf")
		std::cout << "char: Impossible\n";
	else if (f < 32 || f > 126)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << "\n";
	if (imp_int(str, f))
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int>(f) << "\n";
	if (imp_float(str, f))
		std::cout << "float: Impossible\n";
	else if (f == static_cast<int>(f))
		std::cout << "float: " << f << ".0f\n";
	else
		std::cout << "float: " << f << "f\n";
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
		std::cout << "double: Impossible\n";
	else if (f == static_cast<int>(f))
		std::cout << "double: " << f << ".0\n";
	else
		std::cout << "double: " << f << "\n";
}

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "error: wrong argument" << std::endl;
		return 0;
	};
	if (argv[1][0] == '\0') {
		std::cout << "error: empty string" << std::endl;
		return 0;
	}
	std::string	str = "";
	str.append(argv[1]);
	double	f = atof(argv[1]);
	switch  (check_error(str)) {
		case 0:
			char_casting(str, str[0]);
			break ;
		case 1:
			int_casting(str, static_cast<int>(f));
			break ;
		case 2:
			float_casting(str, static_cast<float>(f));
			break ;
		case 3:
			double_casting(str, f);
			break ;
		default:
			std::cout << "error: parameter is not a literal\n";
	}
	return 0;
}
