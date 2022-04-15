#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
typename T::iterator easyfind(T t, int a) {
	typename T::iterator found;
	found = std::find(t.begin(), t.end(), a);

	//this would be my own implementation:
	//for (found = t.begin(); found != t.end() && *found != a; found++) {}

	//the standard library doesn't throw an exception, so I won't either
	//if (found == t.end())
	//	throw std::exception();
	//
	return found;
}

#endif
