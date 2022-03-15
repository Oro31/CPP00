#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _target("home"), _name("DefaultShrubberyCreation"),
	_signed(false), _sign_grade(72), _exe_grade(45) {
	std::cout << GREEN << "RobotomyRequestForm Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : _target(target), _name("Robotomy"),
	_signed(false),	_sign_grade(72), _exe_grade(45) {
	std::cout << GREEN << "RobotomyRequestForm parametric constructor" 
		<< END_COLOR << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : _target(form._target),
	_name(form._name), _signed(form._signed), _sign_grade(form._sign_grade),
	_exe_grade(form._exe_grade) {
	std::cout << GREEN << "RobotomyRequestForm copy Constructor" 
		<< END_COLOR << std::endl;
	*this = form;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
	std::cout << GREEN << "RobotomyRequestForm assignement operator" 
		<< END_COLOR << std::endl;
	_signed = form._signed;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &form) {
	out << "RobotomyRequestForm: " << form.getName()
		<< "\nSigned ?: " << form.getSigned()
		<< "\nGrade required to sign it: " << form.getSignGrade()
		<< "\nGrade required to execute it: " << form.getExeGrade()
		<< "\nTarget: " << form.getTarget();
	return out;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << GREEN << "RobotomyRequestForm destroyed" 
		<< END_COLOR << std::endl;
	return ;
}

/*const char	*RobotomyRequestForm::GradeTooHighException::what(void) const throw() {
	return "Grade too high.";
}

const char	*RobotomyRequestForm::GradeTooLowException::what(void) const throw() {
	return "Grade too low.";
}
*/
std::string	RobotomyRequestForm::getName(void) const {
	return _name;
}

std::string	RobotomyRequestForm::getTarget(void) const {
	return _target;
}

bool	RobotomyRequestForm::getSigned(void) const {
	return _signed;
}

int	RobotomyRequestForm::getSignGrade(void) const {
	return _sign_grade;
}

int	RobotomyRequestForm::getExeGrade(void) const {
	return _exe_grade;
}

void	RobotomyRequestForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _sign_grade)
		throw(GradeTooLowException());
	else
		_signed = true;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > _exe_grade) {
		throw(GradeTooLowException());
	} else {
		if (!_signed) {
			throw(NotSignedException());
		} else {
			std::cout << "bruiiiuizuizuizouiii...";
			srand(time(NULL));
			int rand_value = rand();
			rand_value = rand_value % 2;
			if (rand_value == 1) {
				std::cout << _target << " has been robotomized successfully !"
					<< std::endl;
			} else {
				std::cout << "Robotomy of " << _target << " failed."
					<< std::endl;
			}
		}
	}
	return ;
}
