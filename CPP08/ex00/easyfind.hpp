#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <iostream>

template <class T>
		typename T::iterator	easyfind(T &found, int &num) {
	typename T::iterator	it;

	try {
		it = std::find(found.begin(), found.end(), num);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (it);
}

#endif //EASYFIND_H
