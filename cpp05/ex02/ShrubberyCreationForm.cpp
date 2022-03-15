#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _target("home"), _name("DefaultShrubberyCreation"),
	_signed(false), _sign_grade(145), _exe_grade(137) {
	std::cout << GREEN << "ShrubberyCreationForm Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : _target(target), _name("Shrubbery"),
	_signed(false),	_sign_grade(145), _exe_grade(137) {
	std::cout << GREEN << "ShrubberyCreationForm parametric constructor" 
		<< END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : _target(form._target),
	_name(form._name), _signed(form._signed), _sign_grade(form._sign_grade),
	_exe_grade(form._exe_grade) {
	std::cout << GREEN << "ShrubberyCreationForm copy Constructor" 
		<< END_COLOR << std::endl;
	*this = form;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form) {
	std::cout << GREEN << "ShrubberyCreationForm assignement operator" 
		<< END_COLOR << std::endl;
	_signed = form._signed;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &form) {
	out << "ShrubberyCreationForm: " << form.getName()
		<< "\nSigned ?: " << form.getSigned()
		<< "\nGrade required to sign it: " << form.getSignGrade()
		<< "\nGrade required to execute it: " << form.getExeGrade()
		<< "\nTarget: " << form.getTarget();
	return out;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << GREEN << "ShrubberyCreationForm destroyed" 
		<< END_COLOR << std::endl;
	return ;
}

/*const char	*ShrubberyCreationForm::GradeTooHighException::what(void) const throw() {
	return "Grade too high.";
}

const char	*ShrubberyCreationForm::GradeTooLowException::what(void) const throw() {
	return "Grade too low.";
}
*/
std::string	ShrubberyCreationForm::getName(void) const {
	return _name;
}

std::string	ShrubberyCreationForm::getTarget(void) const {
	return _target;
}

bool	ShrubberyCreationForm::getSigned(void) const {
	return _signed;
}

int	ShrubberyCreationForm::getSignGrade(void) const {
	return _sign_grade;
}

int	ShrubberyCreationForm::getExeGrade(void) const {
	return _exe_grade;
}

void	ShrubberyCreationForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _sign_grade)
		throw(GradeTooLowException());
	else
		_signed = true;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) {
	if (executor.getGrade() > _exe_grade) {
		throw(GradeTooLowException());
	} else {
		if (!_signed) {
			throw(NotSignedException());
		} else {
			std::ofstream	fichier_out(_target.c_str(), std::ios::out | std::ios::trunc);
			if (!fichier_out) {
				std::cerr << "Error: cannot open\n";
				return ;
			}
			fichier_out << "              _{\\ _{\\{\\\\/}/}/}__\n"
				<< "             {/{/\\}{/{/\\}(\\}{/\\} _\n"
				<< "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
				<< "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
				<< "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
				<< "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
				<< "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
				<< "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
				<< "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
				<< "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
				<< "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
				<< "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
				<< "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
				<< "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
				<< "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
				<< "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
				<< "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
				<< "              {){/ {\\/}{\\/} \\}\\}\n"
				<< "              (_)  \\.-'.-/\n"
				<< "          __...--- |'-.-'| --...__\n"
				<< "   _...--'   .-'   |'-.-'|  ' -.  ''--..__\n"
				<< " -'    ' .  . '    |.'-._| '  . .  '   \n"
				<< " .  '-  '    .--'  | '-.'|    .  '  . '\n"
				<< "          ' ..     |'-_.-|\n"
				<< "  .  '  .       _.-|-._ -|-._  .  '  .\n"
				<< "              .'   |'- .-|   '.\n"
				<< "  ..-'   ' .  '.   `-._.-'   .'  '  - .\n"
				<< "   .-' '        '-._______.-'     '  ." << std:: endl;
			fichier_out.close();
		}
	}
}
