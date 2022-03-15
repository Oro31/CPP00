#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include "couleur.h"
#include "Form.hpp"

class	ShrubberyCreationForm : public Form {
	public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);

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

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &form);

#endif
