#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Default"), _signed(false),
	_sign_grade(1), _exe_grade(150) {
	std::cout << GREEN << "Form Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

Form::Form(const std::string name, int sign_grade,
		int exe_grade) : _name(name), _signed(false),
	_sign_grade(sign_grade), _exe_grade(exe_grade) {
	std::cout << GREEN << "Form parametric constructor" 
		<< END_COLOR << std::endl;
	if (sign_grade < 1 || exe_grade < 1)
	   throw(GradeTooHighException());
	else if (sign_grade > 150 || exe_grade > 150)
		throw(GradeTooLowException());
	return ;
}

Form::Form(const Form &form) : _name(form._name), _signed(form._signed),
	_sign_grade(form._sign_grade), _exe_grade(form._exe_grade) {
	std::cout << GREEN << "Form copy Constructor" 
		<< END_COLOR << std::endl;
	*this = form;
	return ;
}

Form &Form::operator=(const Form &form) {
	std::cout << GREEN << "Form assignement operator" 
		<< END_COLOR << std::endl;
	_signed = form._signed;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Form &form) {
	out << "Form: " << form.getName()
		<< "\nSigned ?: " << form.getSigned()
		<< "\nGrade required to sign it: " << form.getSignGrade()
		<< "\nGrade required to execute it: " << form.getExeGrade();
	return out;
}

Form::~Form(void) {
	std::cout << GREEN << "Form destroyed" 
		<< END_COLOR << std::endl;
	return ;
}

const char	*Form::GradeTooHighException::what(void) const throw() {
	return "Grade too high.";
}

const char	*Form::GradeTooLowException::what(void) const throw() {
	return "Grade too low.";
}

const char	*Form::NotSignedException::what(void) const throw() {
	return "Form not signed.";
}

std::string	Form::getName(void) const {
	return _name;
}

bool	Form::getSigned(void) const {
	return _signed;
}

int	Form::getSignGrade(void) const {
	return _sign_grade;
}

int	Form::getExeGrade(void) const {
	return _exe_grade;
}

void	Form::setSigned(bool sign) {
	_signed = sign;
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _exe_grade)
		throw(GradeTooLowException());
	else
		_signed = true;
}

void	Form::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() <= _exe_grade) {
		if (_signed) {
			this->action();
		} else {
			throw(NotSignedException());
		}
	} else {
		throw(GradeTooLowException());
	}
}

void	Form::action(void) const {
	std::cout << "you shouldn't see this message";
}
