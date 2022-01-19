#include "repertoire.hpp"

void	repertoire::add_contact() {
	Contact	new_con;
	new_con.add_first_name();
	if (index == 7)
		index = 0;
	else
		nb_contacts++;
	contacts[index] = new_con;
	index++;
	std::cout << "$>";
}

void	repertoire::search_contact() {
	std::cout << "first_name" << std::endl;
	for (int i = 0; i < nb_contacts; i++) {
		contacts[i].disp_fst();
		std::cout << std::endl;
	}
	std::cout << "$>";
}
