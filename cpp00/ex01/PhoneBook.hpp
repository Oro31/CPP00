#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "header.h"
#include "Contact.hpp"

class	PhoneBook {
	public:

	PhoneBook();
	void	add_contact();
	void	search_contact();

	private:

	Contact		contacts[8];
	int			nb_contacts;
	int			index;
};

#endif
