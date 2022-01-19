#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "header.h"
#include "Contact.hpp"

class	PhoneBook
{
	public:

	void	add_contact();
	void	search_contact();
	void	disp_cts(std::string str);

	private:

	Contact		contacts[8];
	int			nb_contacts;
	int			index;
};

#endif
