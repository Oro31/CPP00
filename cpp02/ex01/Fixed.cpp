#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	_fvalue = 0;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called\n";
	_fvalue = i;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called\n";
	_fvalue = (int)f;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignement operator called\n";
	_fvalue = fixed._fvalue;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

float	Fixed::toFloat(void) const {
	return	_fvalue;
}

int	Fixed::toInt(void) const {
	return (int)_fvalue;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}
