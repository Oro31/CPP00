#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << GREEN << "Intern Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

Intern::~Intern(void) {
	std::cout << GREEN << "Intern destroyed" 
		<< END_COLOR << std::endl;
}

Form	*Intern::makeForm(std::string name, std::string target) {
	Form	*ret;
	std::string	form_name[3] = {"ShrubberyCreationForm", "RobotomyRequestForm",
		"PresidentialPardonForm"};
	std::string	request[3] = {"shrubbery request", "robotomy request",
		"presidential request"};
	int	i = -1;
	while (++i < 3) {
		if (name.compare(request[i]) == 0)
			break;
	}
	switch (i) {
		case 0:
			std::cout << "Intern creates " << form_name[0] << std::endl;
			ret = new ShrubberyCreationForm(target);
			break;
		case 1:
			std::cout << "Intern creates " << form_name[1] << std::endl;
			ret = new RobotomyRequestForm(target);
			break;
		case 2:
			std::cout << "Intern creates " << form_name[2] << std::endl;
			ret = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Intern can't creates cause form doesn't exist"
				<< std::endl;
			return NULL;
	}
	return ret;
}
