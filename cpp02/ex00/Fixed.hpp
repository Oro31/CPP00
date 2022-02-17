#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

class	Fixed {
	public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	~Fixed(void);
	Fixed &operator=(const Fixed &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
	int					_value;
	static const int	_nb_frctional_bits = 8;
};

#endif
