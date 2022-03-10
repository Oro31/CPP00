#include "Brain.hpp"

Brain::Brain(void) {
	std::string	str = "ideas";
	std::string	id;
	std::cout << GREEN << "Brain Default constructor" 
		<< END_COLOR << std::endl;
	for (int i = 0; i < 100; i++) {
		id = (i % 10) + 48;
		id.append("_");
		_ideas[i] = id.append(str);
	}
	return ;
}

Brain::Brain(const Brain &brain) {
	std::cout << GREEN << "Brain copy Constructor" 
		<< END_COLOR << std::endl;
	*this = brain;
	return ;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << GREEN << "Brain assignement operator" 
		<< END_COLOR << std::endl;
	for (int i = 0; i < 100; i++) {
		this->setIdeaI(i, brain.getIdeaI(i));
	}
	return *this;
}

Brain::~Brain(void) {
	std::cout << GREEN << "Brain destroyed" 
		<< END_COLOR << std::endl;
}

const std::string	Brain::getIdeaI(int i) const {
	return _ideas[i];
}

void	Brain::setIdeaI(int i, std::string str) {
	_ideas[i] = str;
}

void	Brain::printIdeas(void) {
	for (int i = 0; i < 100; i++) {
		std::cout << _ideas[i];
	}
	std::cout << "\n";
}
