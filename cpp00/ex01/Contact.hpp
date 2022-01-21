#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "header.h"

class Contact
{
	public:

	void	add_index(int n);
	void	add_first_name();
	void	add_last_name();
	void	add_nick_name();
	void	add_phone_number();
	void	add_darkest_secret();
	void	disp_cts(std::string str);
	void	four_column_display();
	void	search();

	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
	std::string	index;
};

#endif


