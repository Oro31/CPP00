#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "couleur.h"

class	Brain {
	public:

	Brain(void);
	Brain(const Brain &brain);
	~Brain(void);
	Brain &operator=(const Brain &brain);

	const std::string	getIdeaI(int i) const;
	void	setIdeaI(int i, std::string str);
	void	printIdeas(void);

	private:

	std::string	_ideas[100];
};

#endif
