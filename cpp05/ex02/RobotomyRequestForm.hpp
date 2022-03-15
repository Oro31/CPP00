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

	std::string	getName(void) const;
	std::string	getTarget(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExeGrade(void) const;

	void	beSigned(Bureaucrat &bureaucrat);
	void	execute(void);

/*	class	GradeTooHighException : public std::exception {
		const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception {
		const char	*what(void) const throw();
	};
*/
	private:

	const std::string	_target;
	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;
	const int			_exe_grade;
};

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &form);

#endif
