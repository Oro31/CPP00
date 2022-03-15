#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _target("home"), _name("DefaultPresidentialPardon"),
	_signed(false), _sign_grade(25), _exe_grade(5) {
	std::cout << GREEN << "PresidentialPardonForm Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : _target(target), _name("Presidential"),
	_signed(false),	_sign_grade(25), _exe_grade(5) {
	std::cout << GREEN << "PresidentialPardonForm parametric constructor" 
		<< END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : _target(form._target),
	_name(form._name), _signed(form._signed), _sign_grade(form._sign_grade),
	_exe_grade(form._exe_grade) {
	std::cout << GREEN << "PresidentialPardonForm copy Constructor" 
		<< END_COLOR << std::endl;
	*this = form;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form) {
	std::cout << GREEN << "PresidentialPardonForm assignement operator" 
		<< END_COLOR << std::endl;
	_signed = form._signed;
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

/*const char	*PresidentialPardonForm::GradeTooHighException::what(void) const throw() {
	return "Grade too high.";
}

const char	*PresidentialPardonForm::GradeTooLowException::what(void) const throw() {
	return "Grade too low.";
}
*/
std::string	PresidentialPardonForm::getName(void) const {
	return _name;
}

std::string	PresidentialPardonForm::getTarget(void) const {
	return _target;
}

bool	PresidentialPardonForm::getSigned(void) const {
	return _signed;
}

int	PresidentialPardonForm::getSignGrade(void) const {
	return _sign_grade;
}

int	PresidentialPardonForm::getExeGrade(void) const {
	return _exe_grade;
}

void	PresidentialPardonForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _sign_grade)
		throw(GradeTooLowException());
	else
		_signed = true;
}

void	PresidentialPardonForm::execute() {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
