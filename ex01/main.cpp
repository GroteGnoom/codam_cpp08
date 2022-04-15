
#include "Span.hpp"
#include <iostream>
#include <array>

int main() {
	Span span(3);

	span.addNumber(1);
	span.addNumber(2);
	span.addNumber(3);

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	//span.addNumber(4);
	//span.addNumber(5);
}
