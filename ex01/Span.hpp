#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <iterator>
# include <vector>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_arr;

	public:
		// Constructors
		Span();
		Span( unsigned int size );
		Span( const Span &other );

		// Destructor
		~Span();

		// Operator overload
		Span &operator=( const Span &other );

		// Member functions
		void addNumber( int n );
		void addMultipleNumbers( std::vector<int>::iterator begin, std::vector<int>::iterator end );
		void addMultipleNumbers( std::vector<int> &vec );
		void addMultipleNumbers( int number );
		int shortestSpan();
		int longestSpan();
		void printSpan();

		// Exceptions
		class FullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif