#include "Span.hpp"

Span::Span(void) {
	std::cout << GREEN << "Span Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

Span::Span(unsigned int N) : _N(N) {
	std::cout << GREEN << "Span parametric constructor" 
		<< END_COLOR << std::endl;
	return ;
}

Span::Span(const Span &span) {
	std::cout << GREEN << "Span copy Constructor" 
		<< END_COLOR << std::endl;
	*this = span;
	return ;
}

Span &Span::operator=(const Span &span) {
	std::cout << GREEN << "Span assignement operator" 
		<< END_COLOR << std::endl;
	_N = span._N;
	this->_tab.clear();
	this->_tab = span._tab;
	return *this;
}

Span::~Span(void) {
	std::cout << GREEN << "Span destroyed" 
		<< END_COLOR << std::endl;
}

void	Span::addNumber(const int &n) {
	if (this->_tab.size() >= this->_N)
		throw(NoSpaceException());
	this->_tab.push_back(n);
}

void	Span::addNumber(std::vector<int>::const_iterator first,
	std::vector<int>::const_iterator second) {
	while (first < second) {
		if (_tab.size() == _N)
			throw(NoSpaceException());
		_tab.push_back(*first);
		first++;
	}
}

int	Span::shortestSpan(void) {
	if (this->_tab.size() < 2)
		throw(NoElementException());
	std::sort(_tab.begin(), _tab.end());
	std::vector<int>::const_iterator first;
	first = _tab.begin();
	first++;
	int ret = std::abs(*first - *(first - 1));
	while (++first < _tab.end()) {
		if (std::abs(*first - *(first - 1)) < ret)
			ret = std::abs(*first - *(first - 1));
	}
	return ret;
}

int	Span::longestSpan(void) {
	if (this->_tab.size() < 2)
		throw(NoElementException());
	return	*std::max_element(_tab.begin(), _tab.end()) -
		*std::min_element(_tab.begin(), _tab.end());
}

const char *Span::NoElementException::what() const throw() {
	return "No Element to work with";
}

const char *Span::NoSpaceException::what() const throw() {
	return "No Space for new Element";
}
