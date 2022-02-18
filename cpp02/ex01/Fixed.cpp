#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	_fvalue = 0;
}

Fixed::Fixed(const int i) {
	float	fixed;

	std::cout << "Int constructor called\n";
	fixed = i * pow(2, _nb_fractional_bits);
	fixed = round(fixed);
	_fvalue = fixed;
}

Fixed::Fixed(const float f) {
	float	fixed;

	std::cout << "Float constructor called\n";
	fixed = f * pow(2, _nb_fractional_bits);
	fixed = roundf(fixed);
	_fvalue = (int)fixed;
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

	ret = ((float)_fvalue) / pow(2, _nb_fractional_bits);
	return	ret;
}

int	Fixed::toInt(void) const {
	int	ret;

	ret = (int)(_fvalue) / pow(2, _nb_fractional_bits);
	return ret;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}
