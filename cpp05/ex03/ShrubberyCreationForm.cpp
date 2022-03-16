#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrub", 145, 137), _target("home") {
	std::cout << GREEN << "ShrubberyCreationForm Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrub", 145, 137), _target(target) {
	std::cout << GREEN << "ShrubberyCreationForm parametric constructor" 
		<< END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form(form), _target(form._target) {
	std::cout << GREEN << "ShrubberyCreationForm copy Constructor" 
		<< END_COLOR << std::endl;
	*this = form;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form) {
	std::cout << GREEN << "ShrubberyCreationForm assignement operator" 
		<< END_COLOR << std::endl;
	this->setSigned(form.getSigned());
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

std::string	ShrubberyCreationForm::getTarget(void) const {
	return _target;
}

void	ShrubberyCreationForm::action(void) const{
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
