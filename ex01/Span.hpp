#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

//		template <typename Container, typename = typename std::enable_if<std::is_integral<typename std::iterator_traits<typename Container::iterator>::value_type >::value>::type >

class Span {
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &span);
		Span operator=(const Span &span);
		void addNumber(unsigned int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		template <typename Container>
		void addNumbers(typename Container::iterator begin, typename Container::iterator end) {
			for (; begin < end; begin++) {
				addNumber(*begin);
			}
		};
	private:
		std::vector<int> _numbers;
		void check_elements(const Span &s);
};

#endif
