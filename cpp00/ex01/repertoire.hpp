#ifndef REPERTOIRE_HPP
#define REPERTOIRE_HPP

#include "phone_book.h"
#include "contact.hpp"

class	repertoire
{
	public:

	void	add_contact();
	void	search_contact();

	private:

	Contact		contacts[8];
	int			nb_contacts;
	int			index;
};

#endif
