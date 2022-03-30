#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include "couleur.h"

template<class T>
class	MutantStack : public std::stack<T> {
	public:

	MutantStack(void) : std::stack<T>(){};
	MutantStack(const MutantStack &mutantstack) : std::stack<T>(mutantstack){};
	virtual ~MutantStack(void) {};
	MutantStack &operator=(const MutantStack &mutantstack) {
		this->c = mutantstack.c;
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin() {return this->c.begin();};
	iterator	end() {return this->c.end();};

	private:
};

#endif
