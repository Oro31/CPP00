#ifndef FORM_HPP
#define FORM_HPP

class	Bureaucrat;
class	Form;
class	ShrubberyCreationForm;
class	RobotomyRequestForm;
class	PresidentialPardonForm;

#include <iostream>
#include "couleur.h"

class	Form {
	public:

	Form(void);
	virtual ~Form(void) = 0;
	Form(const std::string name, int sign_grade, int exe_grade);
	Form(const Form &form);
	Form &operator=(const Form &form);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExeGrade(void) const;

	void	setSigned(bool sign);

	void	beSigned(Bureaucrat &bureaucrat);
	void	execute(Bureaucrat const &executor) const;
	virtual void	action(void) const;

	class	GradeTooHighException : public std::exception {
		const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception {
		const char	*what(void) const throw();
	};

	class	NotSignedException : public std::exception {
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
