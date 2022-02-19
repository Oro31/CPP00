#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << GREEN << "Default constructor called\n" << END_COLOR;
	_fvalue = 0;
}

Fixed::Fixed(const int i) {
	float	fixed;

	std::cout << GREEN << "Int constructor called\n" << END_COLOR;
	fixed = i << _nb_fractional_bits;
	_fvalue = fixed;
}

Fixed::Fixed(const float f) {
	float	fixed;

	std::cout << GREEN << "Float constructor called\n" << END_COLOR;
	fixed = roundf(f * (float)(1 << _nb_fractional_bits));
	_fvalue = (int)fixed;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << GREEN << "Copy constructor called\n" << END_COLOR;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << GREEN << "Copy assignement operator called\n" << END_COLOR;
	_fvalue = fixed._fvalue;
	return *this;
}

Fixed Fixed::operator+(const Fixed &b) {
	Fixed	ret;

	std::cout << GREEN << "Addidtion operator called\n" << END_COLOR;
	ret._fvalue = _fvalue + b._fvalue;
	return ret;
}

Fixed Fixed::operator-(const Fixed &b) {
	Fixed	ret;

	std::cout << GREEN << "Substraction operator called\n" << END_COLOR;
	ret._fvalue = _fvalue - b._fvalue;
	return ret;
}

Fixed Fixed::operator*(const Fixed &b) {
	Fixed	ret;

	std::cout << GREEN << "Multiplication operator called\n" << END_COLOR;
	ret._fvalue = (int)(_fvalue * b._fvalue) / (1 << _nb_fractional_bits);
	return ret;
}

Fixed Fixed::operator/(const Fixed &b) {
	Fixed	ret;

	std::cout << GREEN << "Division operator called\n" << END_COLOR;
	ret._fvalue = _fvalue / (int)(b._fvalue / (1 << _nb_fractional_bits));
	return ret;
}

bool	Fixed::operator>(const Fixed &b) {
	std::cout << GREEN << "Sup comparison operator called\n" << END_COLOR;
	return (this->toFloat() > b.toFloat());
}

bool	Fixed::operator<(const Fixed &b) {
	std::cout << GREEN << "Inf comparison operator called\n" << END_COLOR;
	return (this->toFloat() < b.toFloat());
}

bool	Fixed::operator>=(const Fixed &b) {
	std::cout << GREEN << "Sup or equal comparison operator called\n"
		<< END_COLOR;
	return (this->toFloat() >= b.toFloat());
}

bool	Fixed::operator<=(const Fixed &b) {
	std::cout << GREEN << "Inf or equal comparison operator called\n"
		<< END_COLOR;
	return (this->toFloat() <= b.toFloat());
}

bool	Fixed::operator==(const Fixed &b) {
	std::cout << GREEN << "Equal comparison operator called\n" << END_COLOR;
	return (this->toFloat() == b.toFloat());
}

bool	Fixed::operator!=(const Fixed &b) {
	std::cout << GREEN << "Diff comparison operator called\n" << END_COLOR;
	return (!(this->toFloat() == b.toFloat()));
}

Fixed &Fixed::operator++() {
	std::cout << GREEN << "Prefix increment operator called\n" << END_COLOR;
	_fvalue++;
	return *this;
}

Fixed &Fixed::operator--() {
	std::cout << GREEN << "Prefix decrement operator called\n" << END_COLOR;
	_fvalue--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed	tmp = *this;

	std::cout << GREEN << "Postfix increment operator called\n" << END_COLOR;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed	tmp = *this;

	std::cout << GREEN << "Postfix decrement operator called\n" << END_COLOR;
	--*this;
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a >= b)
		return b;
	else
		return a;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a._fvalue >= b._fvalue)
		return b;
	else
		return a;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a >= b)
		return a;
	else
		return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a._fvalue >= b._fvalue)
		return a;
	else
		return b;
}
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

float	Fixed::toFloat(void) const {
	float	ret;

	ret = (float)_fvalue / (float)(1 << _nb_fractional_bits);
	return	ret;
}

int	Fixed::toInt(void) const {
	int	ret;

	ret = (int)(_fvalue / (1 << _nb_fractional_bits));
	return ret;
}

Fixed::~Fixed(void) {
	std::cout << GREEN << "Destructor called\n" << END_COLOR;
}
