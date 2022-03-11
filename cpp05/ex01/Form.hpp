#ifndef FORM_HPP
#define FORM_HPP

class	Form;

#include <iostream>
#include "couleur.h"
#include "Bureaucrat.hpp"

class	Form {
	public:

	Form(void);
	Form(const std::string name, int sign_grade, int exe_grade);
	Form(const Form &form);
	~Form(void);
	Form &operator=(const Form &form);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExeGrade(void) const;

	void	beSigned(Bureaucrat &bureaucrat);

	class	GradeTooHighException : public std::exception {
		const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception {
		const char	*what(void) const throw();
	};

	private:

	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;
	const int			_exe_grade;
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
