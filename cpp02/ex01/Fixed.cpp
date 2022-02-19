#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	_fvalue = 0;
}

Fixed::Fixed(const int i) {
	int	fixed;

	std::cout << "Int constructor called\n";
	fixed = i << _nb_fractional_bits;
	_fvalue = fixed;
}

Fixed::Fixed(const float f) {
	int	fixed;

	std::cout << "Float constructor called\n";
	fixed = roundf(f * (float)(1 << _nb_fractional_bits));
	_fvalue = fixed;
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
	float	ret;

	ret = (float)_fvalue / (float)(1 << _nb_fractional_bits);
	return	ret;
}

int	Fixed::toInt(void) const {
	int	ret;

	ret = _fvalue / (1 << _nb_fractional_bits);
	return ret;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}
