#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "couleur.h"
#include "Form.hpp"

class	RobotomyRequestForm : public Form {
	public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	~RobotomyRequestForm(void);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &form);

	std::string	getTarget(void) const;
	void	action(void) const;

	private:

	const std::string	_target;
};

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &form);

#endif
