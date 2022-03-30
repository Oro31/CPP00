#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include "couleur.h"

class	Span {
	public:

	Span(void);
	Span(unsigned int N);
	Span(const Span &span);
	~Span(void);
	Span &operator=(const Span &span);

	void	addNumber(const int &n);
	void	addNumber(std::vector<int>::const_iterator first,
				std::vector<int>::const_iterator second);
	int		shortestSpan(void);
	int		longestSpan(void);

	class NoSpaceException : public std::exception {
		public:
			const char *what() const throw();
	};

	class NoElementException : public std::exception {
		public:
			const char *what() const throw();
	};

	private:

	unsigned int _N;
	std::vector<int> _tab;
};

#endif
