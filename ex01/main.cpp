
#include "Span.hpp"
#include <iostream>
#include <vector>

/*
template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &v) {
	for (unsigned i = 0; i < v.size(); i++) { 
		if (i)
			out << " ";
		out << v[i];
	}
	return out;
}
*/

int main() {
	Span span(5);

	try {
		span.shortestSpan();
	} catch (std::logic_error &e) {
		std::cout << "found this error: " << e.what() << std::endl;
	}

	span.addNumber(1);

	try {
		span.shortestSpan();
	} catch (std::logic_error &e) {
		std::cout << "found this error: " << e.what() << std::endl;
	}

	span.addNumber(13);
	span.addNumber(3);
	span.addNumber(10);
	span.addNumber(7);

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	try {
		span.addNumber(4);
	} catch (std::length_error &e) {
		std::cout << "found this error: " << e.what() << std::endl;
	}

	Span bigspan(100000);
	for (int i = 0; i < 100000; i++) {
		bigspan.addNumber(i);
	}

	std::cout << bigspan.shortestSpan() << std::endl;
	std::cout << bigspan.longestSpan() << std::endl;

	std::cout << "--------subject tests--------" << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--------iterator tests--------" << std::endl;

	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(42);
	vec.push_back(13);
	vec.push_back(14);
	vec.push_back(71);

	Span span2 = Span(100);
	span2.addNumbers<std::vector<int> >(vec.begin() + 1, vec.end() - 1);

	std::cout << span2.shortestSpan() << std::endl;
	std::cout << span2.longestSpan() << std::endl;
	
	return 0;
}
