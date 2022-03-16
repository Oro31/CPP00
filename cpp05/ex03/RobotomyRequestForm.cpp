#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robot", 72, 45), _target("home") {
	std::cout << GREEN << "RobotomyRequestForm Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robot", 72, 45), _target(target) {
	std::cout << GREEN << "RobotomyRequestForm parametric constructor" 
		<< END_COLOR << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : Form(form), _target(form._target) {
	std::cout << GREEN << "RobotomyRequestForm copy Constructor" 
		<< END_COLOR << std::endl;
	*this = form;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
	std::cout << GREEN << "RobotomyRequestForm assignement operator" 
		<< END_COLOR << std::endl;
	this->setSigned(form.getSigned());
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

std::string	RobotomyRequestForm::getTarget(void) const {
	return _target;
}

void	RobotomyRequestForm::action(void) const {
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
	return ;
}
