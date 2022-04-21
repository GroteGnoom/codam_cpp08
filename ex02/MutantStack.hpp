#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		//typedef ra_iterator<T, size_t> iterator;
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack &m) {
			*this = m;
		}
		MutantStack &operator=(const MutantStack &m) {
			*this = m;
			return *this;
		}
		iterator end() {
			return (this->c.end());
		}
		iterator begin() {
			return (this->c.begin());
		}
};

#endif
