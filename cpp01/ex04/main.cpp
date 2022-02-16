#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

int	main(int argc, char **argv) {
	if (argc != 4)
		return 0;
	std::string	str1 = argv[2];
	std::string	str2 = argv[3];

	std::ifstream	fichier_in(argv[1], std::ios::in);

	if (fichier_in) {
		std::string	fichier_replace_name;
		std::string	line;

		fichier_replace_name = argv[1];
		fichier_replace_name.append(".replace");
		std::ofstream	fichier_out(fichier_replace_name.c_str(),
				std::ios::out | std::ios::trunc);

		if (fichier_out) {
		std::string replace = "";

			while (getline(fichier_in, line)) {
				int	i = 0;
				while (line[i]) {
					if (line[i] == str1[0]) {
						int	j = 1;
						while (line[i + j] && line[i + j] == str1[j]
							&& j < (int)str1.length()) {
							j++;
						}
						if (j == (int)str1.length()) {
							replace.append(str2);
							i += j - 1;
						}
						else
							replace += line[i];
					}
					else
						replace += line[i];
					i++;
				}
				fichier_out << replace << "\n";
				replace = "";
			}
			fichier_out.close();
		}
		else
			std::cerr << "cannot open" << std::endl;
		fichier_in.close();
	}
	else
		std::cerr << "cannot open" << std::endl;
	return 0;
}
