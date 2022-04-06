#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <sstream>
#include <stdexcept>

template <typename T>
class Array {
	size_t	_size;
	T		*_element;
public:

	Array();
	Array(unsigned int n);
	Array(const Array<T> &array);
	~Array();
	Array &operator=(const Array<T> &array);
	T &operator[](size_t position) const;
	T &operator[](size_t position);

	size_t	size() const;
};

template <typename T>
Array<T>::Array() : _size(0), _element(new T[0]) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _element(new T[n]) {
}

template <typename T>
Array<T>::Array(const Array<T> &array) {
	this->_element = NULL;
	*this = array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &array) {
	if (this->_element != NULL)
		delete [] this->_element;
	this->_size = array._size;
	this->_element = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++) {
		this->_element[i] = array._element[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete [] this->_element;
}

template <typename T>
size_t Array<T>::size() const {
	return this->_size;
}

template <typename T>
T &Array<T>::operator[](size_t position) const {
	if (position >= this->_size) {
		std::stringstream buffer;
		buffer << "Bad position: " << position;
		throw(std::out_of_range(buffer.str()));
	}
	return this->_element[position];
}

template <typename T>
T &Array<T>::operator[](size_t position) {
	if (position >= this->_size) {
		std::stringstream buffer;
		buffer << "Bad position: " << position;
		throw(std::out_of_range(buffer.str()));
	}
	return this->_element[position];
}

#endif
