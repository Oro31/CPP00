#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class	Bureaucrat;

#include "couleur.h"
#include "Form.hpp"

class	Bureaucrat {
	public:

	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat(void);
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void	increment(void);
	void	decrement(void);
	void	signForm(Form &form);

	class	GradeTooHighException : public std::exception {
		const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception {
		const char	*what(void) const throw();
	};

	private:

	const std::string	_name;
	int					_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
