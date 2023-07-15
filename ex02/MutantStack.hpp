#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <iterator>
# include <stack>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		// Constructors
		MutantStack() : std::stack<T, Container>() {
		}

		MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {
		}

		// Destructor
		~MutantStack() {
		}

		// Operator overload
		MutantStack &operator=(const MutantStack &other) {
			if (this != &other)
				std::stack<T, Container>::operator=(other);
			return *this;
		}

		// Member functions
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator begin() {
			return std::stack<T, Container>::c.begin();
		}
		iterator end() {
			return std::stack<T, Container>::c.end();
		}
};

#endif