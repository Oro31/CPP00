#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <cctype>
#include <string>
#include "couleur.h"
#include "Form.hpp"

class	PresidentialPardonForm : public Form {
	public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	~PresidentialPardonForm(void);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &form);

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

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &form);

#endif
