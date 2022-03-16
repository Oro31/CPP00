#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "couleur.h"

class	Intern {
	public:

	Intern(void);
	~Intern(void);

	Form	*makeForm(std::string name, std::string target);

	private:
};

#endif
