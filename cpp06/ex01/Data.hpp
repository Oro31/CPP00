#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include "couleur.h"

class	Data {
	public:

	Data(void);
	Data(int id);
	Data(const Data &data);
	~Data(void);
	Data &operator=(const Data &data);

	int	getId(void);

	private:

	int	_id;
};

#endif
