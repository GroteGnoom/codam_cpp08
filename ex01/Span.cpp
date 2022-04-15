#include "Span.hpp"

Span::Span(unsigned int N) {
	_numbers.reserve(N);
}

Span::~Span() {}

Span::Span (const Span &span) : _numbers(span._numbers) {}

Span Span::operator=(const Span &span) {
	_numbers = span._numbers;
	return *this;
}

void Span::addNumber(unsigned int n) {
	if (_numbers.size() < _numbers.capacity()) {
		_numbers.push_back(n);
	} else {
		throw std::length_error("Maximum number capacity reached");
	}
}

void Span::check_elements(const Span &s) {
	if (s._numbers.size() < 2)
		throw std::logic_error("Not enough elements for span!");
}

unsigned int Span::shortestSpan() {
	check_elements(*this);
	vector<unsigned int> tmp = _numbers;
	sort(tmp.begin(), tmp.end());
    //difference vector? and then min?
	//return (*min_element(_numbers.begin(), _numbers.end()));
}

unsigned int Span::longestSpan() {
	check_elements(*this);
	return (*max_element(_numbers.begin(), _numbers.end()) - *min_element(_numbers.begin(), _numbers.end()));
}
