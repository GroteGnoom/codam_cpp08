#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		//typedef typename std::vector<T>::iterator iterator;
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
			//return iterator(&(this->top()) + 1);
		}
		iterator begin() {
			return (this->c.begin());
			//typename std::stack<T>::container_type::iterator it = this->top();
			//T* it = &(this->top());
			//for (size_t i = 0; i < this->size(); i++) { i--; }
			//return iterator(it);
		}




};

#endif
