#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("President", 25, 5), _target("home") {
	std::cout << GREEN << "PresidentialPardonForm Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("President", 25, 5), _target(target) {
	std::cout << GREEN << "PresidentialPardonForm parametric constructor" 
		<< END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : Form(form), _target(form._target) {
	std::cout << GREEN << "PresidentialPardonForm copy Constructor" 
		<< END_COLOR << std::endl;
	*this = form;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form) {
	std::cout << GREEN << "PresidentialPardonForm assignement operator" 
		<< END_COLOR << std::endl;
	this->setSigned(form.getSigned());
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &form) {
	out << "PresidentialPardonForm: " << form.getName()
		<< "\nSigned ?: " << form.getSigned()
		<< "\nGrade required to sign it: " << form.getSignGrade()
		<< "\nGrade required to execute it: " << form.getExeGrade()
		<< "\nTarget: " << form.getTarget();
	return out;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << GREEN << "PresidentialPardonForm destroyed" 
		<< END_COLOR << std::endl;
	return ;
}

std::string	PresidentialPardonForm::getTarget(void) const {
	return _target;
}

void	PresidentialPardonForm::action(void) const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
	return ;
}
