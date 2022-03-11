#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << GREEN << "Bureaucrat Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	std::cout << GREEN << "Bureaucrat parametric constructor" 
		<< END_COLOR << std::endl;
	if (grade < 1)
	   throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
	else
		_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	std::cout << GREEN << "Bureaucrat copy Constructor" 
		<< END_COLOR << std::endl;
	*this = bureaucrat;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	std::cout << GREEN << "Bureaucrat assignement operator" 
		<< END_COLOR << std::endl;
	_grade = bureaucrat._grade;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade();
	return out;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << GREEN << "Bureaucrat destroyed" 
		<< END_COLOR << std::endl;
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Grade too high.";
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Grade too low.";
}

std::string	Bureaucrat::getName(void) const {
	return _name;
}

int	Bureaucrat::getGrade(void) const {
	return _grade;
}

void	Bureaucrat::increment(void) {
	std::cout << "Trying to increment grade for bureaucrat " << _name
		<< std::endl;
	if (_grade == 1)
		throw(GradeTooHighException());
	else
		_grade--;
	return ;
}

void	Bureaucrat::decrement(void) {
	std::cout << "Trying to decrement grade for bureaucrat " << _name
		<< std::endl;
	if (_grade == 150)
		throw(GradeTooLowException());
	else
		_grade++;
	return ;
}
