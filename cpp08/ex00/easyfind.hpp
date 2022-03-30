#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

class CannotFindException : public std::exception {
	public:
		const char *what() const throw() {
			return "Cannot find";
		}
};

template <typename T>
typename T::const_iterator	easyfind(const T &first, const int &second) {
	typename T::const_iterator ret;
	ret = std::find(first.begin(), first.end(), second);
	if (ret == first.end())
		throw CannotFindException();
	return ret;
}

#endif
