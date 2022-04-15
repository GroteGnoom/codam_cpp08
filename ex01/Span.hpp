#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &span);
		Span operator=(const Span &span);
		void addNumber(unsigned int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
	private:
		std::vector<int> _numbers;
		void check_elements(const Span &s);
};

#endif
