#include "Span.hpp"

// Constructors
Span::Span(): _size( 0 ) {
}

Span::Span( unsigned int size ) : _size( size ) {
}

Span::Span( const Span &src ) {
	_size = src._size;
	_arr = src._arr;
	*this = src;
}

// Destructor
Span::~Span() {
}

// Operator overload
Span &Span::operator=( const Span &rhs ) {
	if ( this != &rhs ) {
		_size = rhs._size;
		_arr = rhs._arr;
	}
	return *this;
}

// Member functions
void Span::addNumber( int n ) {
	if ( _arr.size() < _size )
		_arr.push_back( n );
	else
		throw FullException();
}

void Span::addMultipleNumbers( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	if ( _arr.size() + end - begin <= _size )
		_arr.insert( _arr.end(), begin, end );
	else
		throw FullException();
}

void Span::addMultipleNumbers( std::vector<int> &vec ) {
	if ( _arr.size() + vec.size() <= _size )
		_arr.insert( _arr.end(), vec.begin(), vec.end() );
	else
		throw FullException();
}

void Span::addMultipleNumbers( int number ) {
	int sizeToAdd = _size - _arr.size();
	if ( _arr.size() == 0 ) {
		_arr.resize( _size, number );
	}
	else if ( _arr.size() < _size )
		_arr.insert( _arr.end(), sizeToAdd, number );
	else
		throw FullException();
}

int Span::shortestSpan() {
	if ( _arr.size() < 2 )
		throw NotEnoughNumbersException();
	std::vector<int> tmp( _arr );
	int min = INT_MAX;
	for ( std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++ ) {
		std::vector<int>::iterator it2 = it;
		it2++;
		for ( ; it2 != tmp.end(); it2++ ) {
			int diff = abs( *it - *it2 );
			if ( diff < min )
				min = diff;
		}
	}
	return min;
}

int Span::longestSpan() {
	if ( _arr.size() < 2 )
		throw NotEnoughNumbersException();
	std::vector<int> tmp( _arr );
	int max = INT_MIN;
	for ( std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++ ) {
		std::vector<int>::iterator it2 = it;
		it2++;
		for ( ; it2 != tmp.end(); it2++ ) {
			int diff = abs( *it - *it2 );
			if ( diff > max )
				max = diff;
		}
	}
	return max;
}

void Span::printSpan() {
	std::cout << "Span: ";
	for ( std::vector<int>::iterator it = _arr.begin(); it != _arr.end(); it++ )
		std::cout << *it << " ";
	std::cout << std::endl;
}

// Exceptions
const char *Span::FullException::what() const throw() {
	return "Span is full!";
}

const char *Span::NotEnoughNumbersException::what() const throw() {
	return "Not enough numbers to find span!";
}
