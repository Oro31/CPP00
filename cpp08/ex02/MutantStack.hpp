#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include "couleur.h"

template<class T>
class	MutantStack : public std::stack<T> {
	public:

	MutantStack(void) : std::stack<T>() {};
	MutantStack(const MutantStack &mutantstack) : std::stack<T>(mutantstack) {};
	virtual ~MutantStack(void) {};
	MutantStack &operator=(const MutantStack &mutantstack) {
		this->c = mutantstack.c;
		return *this;
	};

	typedef	typename std::stack<T>::container_type::iterator iterator;
	iterator	begin() {return this->c.begin();};
	iterator	end() {return this->c.end();};

	typedef	typename std::stack<T>::container_type::reverse_iterator r_iterator;
	r_iterator	rbegin() {return this->c.rbegin();};
	r_iterator	rend() {return this->c.rend();};

	typedef	typename std::stack<T>::container_type::const_iterator c_iterator;
	c_iterator	begin() const {return this->c.begin();};
	c_iterator	end() const {return this->c.end();};

	typedef	typename std::stack<T>::container_type::const_reverse_iterator cr_iterator;
	cr_iterator	rbegin() const {return this->c.rbegin();};
	cr_iterator	rend() const {return this->c.rend();};

	private:
};

#endif
