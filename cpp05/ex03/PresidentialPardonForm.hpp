#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "couleur.h"
#include "Form.hpp"

class	PresidentialPardonForm : public Form {
	public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	~PresidentialPardonForm(void);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &form);

	std::string	getTarget(void) const;
	void	action(void) const;

	private:

	const std::string	_target;
};

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &form);

#endif
