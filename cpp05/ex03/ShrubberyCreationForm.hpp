#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include "couleur.h"
#include "Form.hpp"

class	ShrubberyCreationForm : public Form {
	public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);

	std::string	getTarget(void) const;
	void	action(void) const;

	private:

	const std::string	_target;
};

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &form);

#endif
