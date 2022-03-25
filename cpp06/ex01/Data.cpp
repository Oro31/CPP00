#include "Data.hpp"

Data::Data(void) {
	std::cout << GREEN << "Data Default constructor" 
		<< END_COLOR << std::endl;
	return ;
}

Data::Data(int id) {
	std::cout << GREEN << "Data param Constructor" 
		<< END_COLOR << std::endl;
	_id = id;
	return ;
}

Data::Data(const Data &data) {
	std::cout << GREEN << "Data copy Constructor" 
		<< END_COLOR << std::endl;
	*this = data;
	return ;
}

Data &Data::operator=(const Data &data) {
	std::cout << GREEN << "Data assignement operator" 
		<< END_COLOR << std::endl;
	_id = data._id;
	return *this;
}

Data::~Data(void) {
	std::cout << GREEN << "Data destroyed" 
		<< END_COLOR << std::endl;
}

int	Data::getId(void) {
	return _id;
}
