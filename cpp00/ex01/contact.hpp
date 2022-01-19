#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "phone_book.h"

class Contact
{
	public:

	void	add_first_name();
	void	disp_fst();

	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phonr_number;
	std::string	darkest_secret;
	int			index;
};

#endif

/*	void	add_last_name(std::string str);
	void	add_nick_name(std::string str);
	void	add_phone_number(std::string str);
	void	add_darkest_secret(std::string str);
*/
