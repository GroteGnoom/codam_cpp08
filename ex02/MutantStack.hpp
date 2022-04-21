#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		//typedef ra_iterator<T, size_t> iterator;
		typedef T* iterator;
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
			return (&this->top() + 1);
		}
		iterator begin() {
			iterator it = &this->top();
			for (size_t i = 1; i < this->size(); i++) {
				it--;
			}
			return it;
		}
};

#endif
